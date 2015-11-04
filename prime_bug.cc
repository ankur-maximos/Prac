#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int isPrime(int A) {
        int upperLimit = (int)(sqrt(A));
            for (int i = 2; i <= upperLimit; i++) {
                        if (i < A && A % i == 0) return 0;
                            }
                return 1;
}


vector<vector<int> > Solution::squareSum(int A) {
    vector<vector<int> > ans;
    for (int a = 0; a * a < A; a++) {
        for (int b = 0; b * b < A; b++) {
            if (a * a + b * b == A) {
                vector<int> newEntry; 
                newEntry.push_back(a);
                newEntry.push_back(b);
                ans.push_back(newEntry);
            }
        }
    }
    return ans;
}


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
