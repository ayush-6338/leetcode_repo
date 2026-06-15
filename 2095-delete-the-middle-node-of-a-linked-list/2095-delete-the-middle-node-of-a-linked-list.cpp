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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr) return nullptr;
        int n = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            n++;
            temp = temp->next;
        }
        if(n%2==0) n = (n/2);
        else n = (n-1)/2;
        temp = head;
        for(int i = 1;i<n;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};