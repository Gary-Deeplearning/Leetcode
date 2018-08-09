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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* pHead = head;
        if (pHead == nullptr)
            return 0;
        if (pHead->next == nullptr)
            return head;
        int last = pHead->val;
        ListNode* qlast = pHead;
        pHead = pHead->next;
        while (pHead){
            if (last == pHead->val){
                qlast->next = pHead->next;
            }else{
                qlast = pHead;
                last = pHead->val;
            }
            pHead = pHead->next;
        }
        return head;
    }
};