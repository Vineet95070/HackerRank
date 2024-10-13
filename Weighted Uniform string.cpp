#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool isPresent(int num, vector<int> v){

    for( int i=0; i<v.size(); i++ ){

        if( v[i] == num)
            return true;
    }

    return false;
}

vector<string> weightedUniformStrings(string s, vector<int> queries) {
    
    map <char, int> m;
    vector <string> output;

    char temp = 'a';
    for( int i=1; i<=26; i++ ){

        m.insert( make_pair( temp, i ) );
        temp++;
    }
    
    int count = 1;
    vector <int> weight;
    for( int i=0; i<s.length(); i++){
        
        int temp = m.at(s[i]);
        if( s[i] == s[i+1] ){

            weight.push_back( temp * count);
            count++;
        }
        else{

            weight.push_back( temp * count);
            count = 1;
        }
    }

    for( int i=0; i<queries.size(); i++){

        bool temp = isPresent(queries[i], weight);

        if(temp)
            output.push_back("Yes");

        else
            output.push_back("No");
    }    

    return output;
}

int main(){
	
	vector <int> que;
	
	que.push_back(9);
	que.push_back(7);
	que.push_back(8);
	que.push_back(12);
	que.push_back(5);
	
	vector<string> out = weightedUniformStrings("aaabbbbcccddd", que);
	
    int i=0;
    while( i!=out.size() ){

        cout<<out[i]<<endl;
        i++;
    }

	return 0;
}