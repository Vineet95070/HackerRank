vector<int> icecreamParlor(int m, vector<int> arr) {
    
        map<int, int> mp;
        vector<int> ans;

        for(int i=0; i<arr.size(); i++){

            int x = arr[i];
            int moreNeed = m - x;

            if( mp.find( moreNeed ) != mp.end() ){

                ans.push_back(mp[moreNeed] + 1);
                ans.push_back(i + 1);

                return ans;
            }
            mp[x] = i;
        }
        return ans;
}