
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    
    int size = 0;
    SinglyLinkedListNode* temp = llist;
    
    while(temp != NULL){
        
        size++;
        temp = temp->next;
    }
    
    int i=0;
    temp = llist;
    while( i != size-positionFromTail-1 ){
        
        i++;
        temp = temp->next;
    }
    
    return temp->data;
}