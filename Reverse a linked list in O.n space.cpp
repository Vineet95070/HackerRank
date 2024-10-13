SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    
    vector<int> v;
    SinglyLinkedListNode* temp = llist;
    
    while( temp != NULL ){
        
        v.push_back( temp->data );
        temp = temp->next;
    }
    
    // sort( v.begin(), v.end() );
    
    int i=v.size()-1;
    SinglyLinkedListNode* temp2 = llist;
    while ( i != -1 ){
        
        temp2->data = v[i--];
        temp2 = temp2->next;
    }
    return llist;
}