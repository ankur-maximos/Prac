#include<iostream>
#include<vector>
using namespace std;

int minimum = 1000;
int size = 10;
vector<int> in(size);

void min(int i,int j) {
    if(i==j) {
         if(minimum>in[i]) minimum = in[i];
         return;
    }
    int k = (i+j)/2;
    min(i,k);
    min(k+1,j);
}



int main() {
    freopen("input.txt","r",stdin); 
    for(int i=0;i<size;i++) {
        cin>>in[i];
    }  
    min(0,size-1);
    cout<<minimum<<"\n"; 
    return 0;
}
