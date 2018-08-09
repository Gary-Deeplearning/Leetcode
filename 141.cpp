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
    bool hasCycle(ListNode *head) {
        if(head == nullptr)
            return false;
        
        ListNode* pSlow = head->next;
        if (pSlow == nullptr)
            return false;
        ListNode *pFast = pSlow->next;
        
        while(pFast != nullptr && pSlow != nullptr){
            if (pFast == pSlow)
                return true;
            pSlow = pSlow->next;
            
            pFast = pFast->next;
            if (pFast != nullptr)
                pFast = pFast->next;
        }
        return false;
    }
};