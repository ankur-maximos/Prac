
long long* combinations(int n) {
    /*int fac[n];
    fac[0] = 1;fac[1]=1;
    for(int i=1;i<n;i++) {
    
    } */
}


int Solution::findRank(string A) {
    string temp = A;
    sort(temp.begin(),temp.end());
    cout<<temp;
    map<char,int> char_map;
    map<char,int>::iterator it;
    for(int i=0;i<temp.length();i++) {
        it = char_map.find(temp[i]);
        if(it!=char_map.end()) {
            charmap.insert(pair<char,int> (temp[i],1));
        } else {
            int temp_num = it->second;
            temp_num++;
            it->second = temp_num;
        }
    }
    for() {
    
    }
    
}

