#include<bits/stdc++.h>
using namespace std;
struct Stack{
    int size;
    int top;
    int *s;

};
void create(struct Stack *st){
    cout<<"enter the size :";
    cin>>st->size;
    st->top = -1;
    st->s = new int[st->size];
}
void display(struct Stack st){
    for(int i=st.top;i>=0;i--){
        cout<<st.s[i]<<" ";
    }
}
void push(struct Stack *st, int x){
    if(st->top == st->size-1){
        cout<<"overflow";
    }
    else{
        st->top++;
        st->s[st->top] = x;
    }
}
int pop(struct Stack *st){
    int x=-1;
    if(st->top==-1){
        cout<<" underflow ";
    }
    else{
        x = st->s[st->top--];
    }
    return x;
}
int main(){
    
    struct Stack st;
    create(&st);

    push(&st, 10);
     push(&st, 20);
     
      int x = pop(&st);
     int y = pop(&st);
     int z = pop(&st);
        display(st);
      return 0;
}
