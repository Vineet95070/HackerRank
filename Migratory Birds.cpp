int migratoryBirds(vector<int> arr) {
    
    sort( arr.begin(), arr.end() );
    
    int max = 0, count = 1;
    int id = arr[0];
    
    for( int i = 0; i<arr.size(); i++ ){
        
        if( arr[i] == arr[i+1] )
            count++;
            
        else{
            
            if(count > max){
                
                max = count;
                count = 1;
                id = arr[i];
            }
        }
    }
    
    return id;
}