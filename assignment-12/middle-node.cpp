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
    ListNode* middleNode(ListNode* head) {
        struct ListNode *temp=head;
     int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        if(count%2==0){
            int i = 1;
            while(i<(count/2)+1 && temp!=NULL){
                i++;
                temp=temp->next;
                
            }
            return temp;
        }
            else{
                 int i = 1;
            while(i<=(count/2) && temp!=NULL){
                
                temp=temp->next;
                i++;
            }
            return temp;
            }
            
        }
};
