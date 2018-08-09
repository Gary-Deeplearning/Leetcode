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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1)
            return l2;
        if (!l2)
            return l1;

        ListNode *head = new ListNode(-1);
        ListNode *p = head;
        auto carry = 0;  // 是否进位
        while (l1 && l2) {
            auto value = l1->val + l2->val + carry;
            carry = value > 9 ? 1 : 0;
            p->next = new ListNode(value % 10);
            p = p->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (carry && !l1 && !l2) {
            p->next = new ListNode(1);
        }
        else if (carry){
            // 只有l1非空
            while (l1) {
                auto value = l1->val + carry;
                carry = value > 9 ? 1 : 0;
                p->next = new ListNode(value % 10);
                p = p->next;
                l1 = l1->next;
            }
            // 只有l2非空
            while (l2) {
                auto value = l2->val + carry;
                carry = value > 9 ? 1 : 0;
                p->next = new ListNode(value % 10);
                p = p->next;
                l2 = l2->next;
            }
        }
        else
            p->next = l1 != nullptr ? l1 : l2;
        if (carry && !l1 && !l2) {
            p->next = new ListNode(1);
        }
        ListNode *q = head->next;	
        return head->next;
    }
};