string isBalanced(string s) {
    
    stack <int> st;
    bool ans = true;
    
    for(int i=0; i<s.length(); i++){
        
        if( s[i] == '[' || s[i] == '{' || s[i] == '(' )
            st.push(s[i]);
            
        else if( s[i] == ')' ){
            
            if( !st.empty() && st.top() == '(' )
                st.pop();
            else{
                ans = false;
                break;
            }
                
        }
        
        else if(  s[i] == ']' ){
            
            if( !st.empty() && st.top() == '[' )
                st.pop();
            else{
                ans = false;
                break;
            }
        }
        
        else if( s[i] == '}' ){
            
            if( !st.empty() && st.top() == '{' )
                st.pop();
            else{
                ans = false;
                break;
            }
        }
    }
    if ( ans && st.empty() )
        return "YES";
    else
        return "NO";
}