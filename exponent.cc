#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

/*
 *rmodular exponentiation
 */
int modular_expo(long long int n,long long int r,int c) {
    int res = 1;
    while(r>0) {
        if(r%2!=0) {
            res = (res*n)%c;
            cout<<"res: "<<res<<"\n";
        }
        n=(n*n)%c;
        cout<<r<<" "; 
        r/=2; 
    }
    return res;
}

int main() {
    int n,r,c;
    cin>>n>>r>>c;
    cout<<modular_expo(n,r,c);
    return 0;
}
