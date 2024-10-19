SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    
    if( llist == NULL )
        return llist;
    
    SinglyLinkedListNode* temp = llist;
    
    while ( temp != NULL && temp->next != NULL){
        
        if( temp->data == temp->next->data){
            
            SinglyLinkedListNode* snode = temp->next;
            temp->next = temp->next->next;
            delete snode;
        }
        else
            temp = temp->next;
    }
    
    return llist;
}