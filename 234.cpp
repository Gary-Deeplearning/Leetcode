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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        
        stack<int> stack_num;
        
        stack_num.push(head->val);
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            stack_num.push(slow->val);
        }
        if (fast->next == nullptr)
            stack_num.pop();
        while(slow->next){
            slow = slow->next;
            int num = stack_num.top();
            stack_num.pop();
            if (num != slow->val)
                return false;
        }
        return true;
    }
};