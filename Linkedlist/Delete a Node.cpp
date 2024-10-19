SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    SinglyLinkedListNode* temp = llist;
    
    if( position == 0){
        
        temp = temp->next;
        return temp;
    }
    
    
    int i=0;
    while( i != position-1){
        
        temp = temp->next;
        i++;
    }
    
    temp->next = temp->next->next;
    return llist;
}