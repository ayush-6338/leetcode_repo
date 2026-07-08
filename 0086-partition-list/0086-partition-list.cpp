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
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr || head->next== nullptr) return head;
        ListNode* lxHead = new ListNode();
        ListNode* gxHead = new ListNode();
        ListNode* lx = lxHead;
        ListNode* gx = gxHead;
        ListNode* temp = head;
        while(temp!=nullptr){
            if(temp->val<x){
                lx->next = temp;
                lx = lx->next;
                temp = temp->next;
            }
            else{
                gx->next = temp;
                gx =  gx->next;
                temp = temp->next;
            }
        }
        gx->next = nullptr;
        lx->next = gxHead->next;
        return lxHead->next;
    }
};