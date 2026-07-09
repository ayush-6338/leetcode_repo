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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr && count<k){
            temp = temp->next;
            count++;
        }

        if(count == k){
            ListNode* prev = nullptr;
            ListNode* curr = head;
            ListNode* nextNode = nullptr;
            int count2 = 0;

            while(count2 < k){
                nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
                count2++;
            }
            head->next = reverseKGroup(curr,k);
            return prev;
        }
        return head;
    }
};