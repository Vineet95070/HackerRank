string angryProfessor(int k, vector<int> a) {
    
    int i=0, count=0;
    while( i != a.size() ){
        
        if( a[i] <= 0 ){
            
            count++;
        }
        
        i++;
    }
    
    if( count < k )
        return "YES";
    
    else
        return "NO";
}