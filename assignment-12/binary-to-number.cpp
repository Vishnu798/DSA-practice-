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
    int getDecimalValue(ListNode* temp) {
        struct ListNode* binary = temp;
    int count=0;
    int number=0;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        count++;
        temp=temp->next;
    }
    cout<<"number of node : "<<count;
    while(binary!=NULL ){
            if(binary->val == 1){
                count--;

                number+=binary->val * pow(2, count);
                binary=binary->next;

            }
            else{
                count--;
                number+=binary->val * pow(2, count);
                binary=binary->next;
            }
    }
    return number;
    }
};
