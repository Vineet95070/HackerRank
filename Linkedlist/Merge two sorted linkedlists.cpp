 void insert(SinglyLinkedListNode* &head, int data){
     
     SinglyLinkedListNode* newnode = new SinglyLinkedListNode(data);
     
     if( head == NULL ){
         
         head = newnode;
         return;
     }
     
     SinglyLinkedListNode* temp = head;
     while( temp->next != NULL){
         
         temp = temp->next;
     }
     temp->next = newnode;
 }
 
 
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    vector<int> arr;
    
    SinglyLinkedListNode* temp1 = head1, *temp2 = head2;
    
    while(temp1 != NULL){
        
        arr.push_back(temp1->data);
        temp1 = temp1->next;
    }
    
    while(temp2 != NULL){
        
        arr.push_back(temp2->data);
        temp2 = temp2->next;
    }
    
    sort(arr.begin(), arr.end());
    SinglyLinkedListNode* newlist = NULL;
    
    int i=0;
    while(i != arr.size()){
        
        insert(newlist, arr[i++]);
    }
    
    return newlist;
}