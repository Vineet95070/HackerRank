SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
    SinglyLinkedListNode* newnode = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp = llist;
    
    if( position == 0 ){
        
        newnode->next = llist;
        return newnode;
    }
    
    int count = 0;
    while( count != position-1 ){
        
        temp = temp->next;
        count++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    
    return llist;
}