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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode* first = head;
        ListNode* backup = head->next;
        ListNode* last = nullptr;
        ListNode* second = nullptr;
        while (first) {
            second = first->next;
            if (first->next)
                first->next = first->next->next;
            else
                first->next = nullptr;
            if (first->next)
                second->next = first->next->next;
            last = first;
            first = first->next;
        }
        last->next = backup;

        return head;
    }
};