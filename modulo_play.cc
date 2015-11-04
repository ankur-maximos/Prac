/*
 *  This is file which plays with modular airthmetic.
 *  All the content has been taken from Khan's Academy.
 *  https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic
 * 
 * */

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
