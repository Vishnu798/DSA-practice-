#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
}*top=NULL;
void push(int x){
    Node *new_node = new Node();

    if(new_node==NULL){
        cout<<"cannot insert node ";
    }
    else{
        new_node->data=x;
        new_node->next = top;
        top=new_node;
    }
}
int pop(){
    int x=-1;
    if(top==NULL){
        cout<<"stack is empty ";
    }
    else{
        x=top->data;
        top=top->next;
    }
    return x;
}
void display(){
    struct Node* p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    int x = pop();
    x= pop(); 
    display();
    return 0;
}
