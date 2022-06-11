SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newnode = new SinglyLinkedListNode(data);
    SinglyLinkedListNode*temp=llist;
    int count=0;
    while(count<position-1){
        count++;
        cout<<"data is : "<<temp->data<<endl;
        temp=temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    cout<<"data is outside : "<<temp->data<<endl;
   
 return llist;   
}

