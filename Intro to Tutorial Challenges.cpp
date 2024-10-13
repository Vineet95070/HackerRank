int introTutorial(int V, vector<int> arr) {
    
    int i=0;
    while( i != arr.size() ){
        
        if( arr[i] == V)
            return i;
            
        i++;
    }
    return -1;
}