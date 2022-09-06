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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p1=list1;
        ListNode *p2=list2;
        ListNode* node = new ListNode(-1);
        ListNode* three = node;
        while(p1!=NULL && p2!=NULL){
            if(p1->val < p2->val){
                three->next=p1;
                p1=p1->next;
            }
            else{
                three->next=p2;
                p2=p2->next;
            }
            three=three->next;
        }
        while(p1!=NULL){
            three->next=p1;
            p1=p1->next;
            three=three->next;
        }
         while(p2!=NULL){
            three->next=p2;
            p2=p2->next;
            three=three->next;
        }
        return node->next;
    }
};
