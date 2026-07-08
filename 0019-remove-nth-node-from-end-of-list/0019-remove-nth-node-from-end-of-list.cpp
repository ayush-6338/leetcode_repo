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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr)return nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        int count = 1;
        while(count<=n){
            fast= fast->next;
            count++;
        }   
        while(fast!=nullptr){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* temp = head;
        if(slow == temp){
            head = head->next;
            delete slow;
            return head;
        }
        while(temp->next != slow){
            temp = temp->next;
        }
        temp->next = slow->next;
        delete slow;
        return head;
    }
};