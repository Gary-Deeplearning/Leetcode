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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr)
            return l2;
        else if(l2 == nullptr)
            return l1;
        
        ListNode* pMergeHead = nullptr;
        
        if (l1->val < l2->val){
            pMergeHead = l1;
            pMergeHead->next = mergeTwoLists(l1->next, l2);
        }else{
            pMergeHead = l2;
            pMergeHead->next = mergeTwoLists(l1, l2->next);
        }
        return pMergeHead;
    }
};