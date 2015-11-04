#include<iostream>
#include<vector>
using namespace std;

int trailingZeroes(int A) {
    int result = 0;
    int num = 5;
    while(num<=A) {
        result+=(A/num);
        num*=5;
    }
    return result;
}

int main() {
    freopen("input.txt","r",stdin);  
    int num;
    cin>>num;
    cout<<trailingZeroes(num);    
    return 0;
}
