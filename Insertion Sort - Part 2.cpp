void print(vector<int> v){
    
    for(auto i: v)
        cout<<i <<" ";
    
    cout<<endl;
}

void insertionSort2(int n, vector<int> arr) {
    for(int i=1; i<n; i++){
        
        int current = arr[i];
        int j=i-1;
        
        while( arr[j] > current && j>=0){
            
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        print(arr);
    }
}