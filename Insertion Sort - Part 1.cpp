void insertionSort1(int n, vector<int> arr) {
    
    for(int i=1; i<arr.size(); i++){
        
        int current = arr[i];
        int j=i-1;
        
        while( arr[j] > current && j>=0){
            
            arr[j+1] = arr[j];
            print(arr);
            j--;
        }
        arr[j+1] = current;
    }
    print(arr);
}