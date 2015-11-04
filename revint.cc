#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin); 
    int n;
    cin>> n;
    int num;
    for(int i=0;i<n;i++) {
        cin>>num;
        cout<<isPrime(num);
    }  
    return 0;
}
