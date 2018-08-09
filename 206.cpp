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
    ListNode* reverseList(ListNode* head) {
        ListNode * p = head;
        if (p == nullptr || p->next == nullptr)
            return head;
        ListNode *q, *r;
        q = p->next;
        p->next = nullptr;
        
        while(q != nullptr){
            r = q->next;
            q->next = p;
            p = q;
            q = r;
        }
     return p;   
    }
};