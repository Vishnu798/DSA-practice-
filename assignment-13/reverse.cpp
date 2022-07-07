class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *ptr = head;
        ListNode *p = NULL;
        ListNode *q = NULL;
        while(ptr!=NULL){
            q=p;
            p=ptr;
            ptr=ptr->next;
            p->next=q;
        }
        head=p;
         return head;
    }
