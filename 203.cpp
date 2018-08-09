/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr)
            return head;
        while(head->val == val){  
            head = head->next;  
            if(head == NULL)  
                return NULL;  
        }
        ListNode *last = head;
        ListNode *p = head->next;
        while(p != nullptr){
            if (p->val == val){
                last->next = p->next;
                delete p;
                p = last->next;
            }else{
                last = p;
                p = p->next;
            }
            
        }
        return head;
    }
};