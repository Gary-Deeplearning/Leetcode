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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if (head == nullptr)
            return head;
        int count = 0;
        ListNode* node = head;
        while (node != nullptr) {
            count++;
            node = node->next;
        }
        int index = count - n + 1;
        node = head;
        count = 1;
        ListNode* prevNode = nullptr;
        if (index == 1) {
            head = node->next;
            delete node;
        }
        else {
            while (node != nullptr) {
                if (count == index) {
                    prevNode->next = node->next;
                    delete node;
                    break;
                }
                count++;
                prevNode = node;
                node = node->next;
            }
        }
        return head;
    }
};