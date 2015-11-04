#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int> sieve(int A) {
    vector<int> res(A+1);
    for(int i=0;i<res.size();i++) {
        res[i] = 1;
    }
    res[0] = 0;
    res[1] = 0;
    for(int i=2;i<=sqrt(A);i++) {
       for(int j=2;i*j<=A;j++) {
        res[i*j] = 0;
       } 
    }
    vector<int> res1;
    for(int i=2;i<res.size();i++) {
        if(res[i] == 1) {
            res1.push_back(i);
        }
    }
    return res1;
}

int main() {
    freopen("input.txt","r",stdin);    
    int n;
    cin>>n;
    vector<int> result = sieve(n);
    for(int i=0;i<result.size();i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}
