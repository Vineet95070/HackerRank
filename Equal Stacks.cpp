int sum(stack<int> st){
    
    int i=0, sum = 0;
    while ( !st.empty() ){
        
        sum += st.top();
        st.pop();
    }
    return sum;
}

bool equal( stack<int>& st1, stack<int>& st2, stack<int>& st3 ){
    
    if( sum(st1) == sum(st2) && sum(st1) == sum(st3) )
        return true;
    else
     return false;
}


int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    stack<int> st1, st2, st3;

    // Push elements in reverse order to maintain the correct order in the stacks
    for (int i = h1.size() - 1; i >= 0; --i) {
        st1.push(h1[i]);
    }
    for (int i = h2.size() - 1; i >= 0; --i) {
        st2.push(h2[i]);
    }
    for (int i = h3.size() - 1; i >= 0; --i) {
        st3.push(h3[i]);
    }

    // Calculate initial sums
    int sum1 = sum(st1);
    int sum2 = sum(st2);
    int sum3 = sum(st3);

    // Iterate until all sums are equal
    while (!(sum1 == sum2 && sum1 == sum3)) {
        if (sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= st1.top();
            st1.pop();
        } else if (sum2 >= sum1 && sum2 >= sum3) {
            sum2 -= st2.top();
            st2.pop();
        } else if (sum3 >= sum1 && sum3 >= sum2) {
            sum3 -= st3.top();
            st3.pop();
        }
    }

    return sum1;
}