#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int size = A.size();
    vector<int> res(2);
    long sum = ((size+1) * size)/2;
    unsigned long long sum_temp = 0;
    unsigned long long sum_temp_sq = 0;
    for(int i=0;i<size;i++) {
        sum_temp+=A[i];
        sum_temp_sq+=A[i]*A[i];
    }
    unsigned long long sum_n = ((size + 1) * size)/2;
    unsigned long long sum_n_sq = sum_n/3;
    bool flag = true;
    if(sum_temp < sum_n){
         flag = false;
    }
    unsigned long long x = (sum_temp > sum_n)?(sum_temp-sum_n):(sum_n-sum_temp);
    sum_n_sq *= (2*size+1);
    unsigned long long y = (sum_temp_sq>sum_n_sq)?(sum_temp_sq-sum_n_sq):(sum_n_sq-sum_temp_sq);
    y /= x;
    unsigned long long t;
    unsigned long long t1;
    if(!flag) {
           t1 = (x+y)/2;
            t = (y-x)/2;
    } else {
        t = (x+y)/2;
        t1 = (y-x)/2;
    }
    int a = (int)t;
    int b = (int)t1;
    res[0]=a;
    res[1]=b;
    return res;
}

int main() {
    freopen("input.txt","r",stdin);    
    int num;
    cin>>num;
    vector<int> in(num);
    for(int i=0;i<num;i++){
          cin>>in[i];
    } 
    vector<int> res = repeatedNumber(in);
    cout<<res[0]<<" "<<res[1];
    return 0;
}
