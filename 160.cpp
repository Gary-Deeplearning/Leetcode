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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p=headA,*q=headB;
        int sizeA=0,sizeB=0;
        
        while(p){
            p=p->next;
            sizeA++;
        }
        while(q){
            q=q->next;
            sizeB++;
        }
        p=headA;q=headB;
        if(sizeA>=sizeB){
            for(int i=0;i<sizeA-sizeB;i++)
                p=p->next;
        }else{
            for(int i=0;i<sizeB-sizeA;i++)
                q=q->next;            
        }
        while(p!=NULL&&q!=NULL&&p!=q){
            p=p->next;
            q=q->next;
        }
        if(p==NULL||q==NULL)return NULL;
        if(p==q)return p;
    }
};