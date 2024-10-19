SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
    SinglyLinkedListNode* newnode = new SinglyLinkedListNode(data);
    
    SinglyLinkedListNode* temp = llist;
    int i=0;
    while( i != position-1){
        
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return llist;
}