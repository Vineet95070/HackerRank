SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

    SinglyLinkedListNode* newhead = new SinglyLinkedListNode(data);
    
    if( llist == NULL){
        
        llist = newhead;
        return llist;
    }
    
    newhead->next = llist;
    llist = newhead;
    return llist;
}