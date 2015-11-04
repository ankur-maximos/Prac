#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;

int isPrime(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int flag = 1;
    if(A<=1) {
        return 0;
    }
    for(int i=2;i<=sqrt(A);i++){
        if(A%i==0) {
            flag = 0;
            break;
        }
    }
    return flag;    
}

string convertToTitle(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count = 1;
    int lim = 26;
    int atemp = A;
    int mul = 26;
    int pre = 0;
    while(lim<atemp) {
        count++;
        mul*=26;
        pre = lim;
        lim=mul+lim;
    }
    string res;
    mul/=26;
    atemp = A-pre-1;
    while(mul>0) {
        int temp = 'A'+ (atemp/mul);
        res+=temp;
        atemp%=mul;
        mul/=26;
    }
    return res;
}


int main() {
    freopen("input.txt","r",stdin); 
    int in;
    cin>>in;
    for(int i=1;i<=1002;i++)
    cout<<convertToTitle(i)<<" " <<i<<"\n";
    return 0;
}
