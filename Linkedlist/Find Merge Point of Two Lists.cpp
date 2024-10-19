int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* temp1 = head1;
    SinglyLinkedListNode* temp2 = head2;
    
    while( temp1 != NULL){
        
        while( temp2 != NULL){
            
            if( temp1 == temp2 )
                return temp2->data;
            
            temp2 = temp2->next;
        }
        
        temp2 = head2;
        temp1 = temp1->next;
    }
    
    return -1;
}