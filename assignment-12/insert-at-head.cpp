SinglyLinkedListNode *newnode = new SinglyLinkedListNode(data);
if(llist == NULL){
    llist = newnode;
    newnode->next = NULL;
}    
else{
    newnode->next=llist;
    llist = newnode;
}
return llist;
}
