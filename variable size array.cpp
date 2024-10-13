#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n1, n2;
    cin>>n1>>n2;
    
    vector< vector <int> > vec;
    for(int i=0; i<n1; i++){
        
        int size;
        cin>>size;
        vector<int> v;
        for(int j=0; j<size; j++){
            
            int val;
            cin>>val;
            v.push_back(val);
        }
        vec.push_back( v );
    }
    
    int row, column;
    for(int i=0; i<n2; i++){
        
        cin>>row>>column;
        cout<<vec[row][column]<<endl;
    }
        
    
    return 0;
}
