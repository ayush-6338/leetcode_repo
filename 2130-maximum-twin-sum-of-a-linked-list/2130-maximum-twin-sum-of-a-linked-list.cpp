/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        int ans = INT_MIN;
        stack<int> st;
        int n = 0;
        while(temp!=nullptr){
            n++;
            temp = temp->next;
        }
        int i = 0;
        temp = head;
        while(i <= (n/2)-1){
            st.push(temp->val);
            temp = temp->next;
            i++;
        }
        while(temp!=nullptr){
            int sum = st.top()+temp->val;
            ans = max(ans,sum);
            st.pop();
            temp=temp->next;
        }
        return ans;
    }
};