#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int gcd(int A, int B) {
    if(A<B) {
        swap(A,B);
    } 
    if(B == 0) {
        return A;
    }
    while((A%B)>0) {
        int temp = A%B;
        A = B;
        B = temp;
    }
    return B;
}

int main() {
    freopen("input.txt","r",stdin); 
    int m,n;   
    cin>>m>>n;
    cout<<gcd(m,n)<<"\n"; 
    return 0;
}
