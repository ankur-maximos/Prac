#include<iostream>
#include<vector>
using namespace std;

void arrange(vector<int> &A) {
    int size = A.size();
    for(int i=0;i<size;i++) {
        A[i] += (A[A[i]])*size;
    }
    for(int i=0;i<size;i++) {
        A[i] /= size;
    }
}

int main() {
    freopen("input.txt","r",stdin); 
    int len;   
    cin>>len;
    vector<int> in;
    int temp;
    for(int i=0;i<len;i++) {
        cin>>temp;
        in.push_back(temp);
    } 
    arrange(in);
    for(int i=0;i<len;i++) {
        cout<<in[i]<<" ";
    }
    return 0;
}
