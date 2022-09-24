#ifndef Queue_h
#define Queue_h

struct node{
    struct node* lchild;
    int data;
    struct node* rchild;
};
struct Queue{
    int size;
    int front;
    int rear;
    node **Q;
};
void create(struct Queue* q, int size){
    q->size = size;
    q->front=q->rear=-1;
    q->Q=new node*[size];
}
void enqueue(struct Queue *q, node* x){
    if(q->rear==q->size-1){
//        cout<<"full";
    }
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}
node* dequeue(struct Queue *q){
    node* x=NULL;
    if(q->front==q->rear){
  //      cout<<"empty";
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
// void display(struct Queue q){
//     for(int i=q.front+1;i<=q.rear;i++){
//         cout<<q.Q[i]<<" ";
//     }
// }
int isEmpty(struct Queue q){
    return q.front==q.rear;
}

#endif
