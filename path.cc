#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int combinatorial(int a, int b) {
    cout<<a<<" "<<b;
    if(b<a/2) {
        b = a-b; 
    }
    int res = 1;
    vector<int> v(a-b);
    for(int i=0;i<(a-b);i++){
        v[i] = b+i+1;
    }
    vector<int> v1;
    bool flag = false;
    for(int i=2;i<=(a-b);i++){
        flag = false;
        for(int j=0;j<v.size();j++) {
           if(v[i]%j==0) {
            v[i]/=j;
            flag = true;
            break;
           }
           if(j%v[i] == 0) {
               v[i] = 1;
               v1.push_back(j/v[i]);
               flag = true;
               break;
           } 
        }
        if(!flag) {
            v1.push_back(i);
        }    
    }
    for(int i=0;i<v1.size();i++) {
        for(int j=0;j<v.size();j++) {
           if(v1[i]%v[j]==0) {
            v1[i]/=v[j];
            v[j] = 1;
            break;
           } 
           if(v[j]%v1[i] == 0) {
               v1[i] = 1;
               v[j]/=v1[i];
               break;
           }  
        }   
        }
    for(int i=0;i<v.size();i++) {
        res*=v[i];
    }
    for(int j=0;j<v1.size();j++) {
        res/=v1[j];
    }

    return res;
}

int uniquePaths(int A, int B) {
    return combinatorial((A-1)+B,(A-1));
}


int main() {
    freopen("input.txt","r",stdin);    
    int a,b;
    cin>>a>>b;
    cout<<uniquePaths(a,b); 
    return 0;
}
