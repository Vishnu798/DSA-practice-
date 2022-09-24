#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* front=NULL, *rear=NULL;
void enqueue(int val){
    node* newnode = new node();
    if(newnode==NULL){
        cout<<"full"<<endl;
    }
    else{
    newnode->data=val;
    newnode->next=NULL;
    
    if(rear==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=rear->next;
    }
    }
}
int dequeue(){
    int x=-1;
    if(front==NULL){
    cout<<"empty"<<endl;
    }
    else{
        x=front->data;
        front=front->next;
    }
    return x;

}
int isEmpty(){
    return front==NULL;
}
