string biggerIsGreater(string s) {
    
    if (next_permutation(s.begin(), s.end())) {
        return s;
    } else {
        return "no answer";
    }
    
}