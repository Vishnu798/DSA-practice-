/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p, *q;
        p=q=head;
        
        
        while(p!=NULL){
            if(head->val==val){
                head=head->next;
            }
            
            if(p->val == val){
                q->next=p->next;
                p=p->next;
            }
            else{
                q=p;
                p=p->next;
            }
        }
        return head;
    }
};
