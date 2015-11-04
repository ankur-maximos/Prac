#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>
using namespace std;

int maxSubArray(const vector<int> &A) {
    int sum_high = A[0];
    int temp;
    int localSum = 0;
    bool flag = true;
    int maxn = A[0];
    for(int i=0;i<A.size();i++){
        if(A[i]>0){
            flag = false;
            break;
        }
        else {
            maxn = max(maxn,A[i]);
        }
    }
    if(flag) return maxn;
    for(int i=1;i<A.size();i++) {
        temp=A[i];
        /*if(sum_high+localSum<0 && temp>sum_high+localSum) {
            sum_high = temp;
            localSum = 0;
            continue;
        }
        if(sum_high<0 && localSum+temp>sum_high) {
            sum_high = localSum+temp;
            localSum = 0;
            continue;
        }
        if(sum_high<sum_high+localSum) {
           sum_high+=localSum;
           localSum = temp;
           continue;
       }*/
        if(localSum+temp>0){
            localSum+=temp; 
        }
        else {
            localSum = 0;
        }
        if(localSum>sum_high)
            sum_high = localSum;
     }
    return sum_high;
}

int main() {
    vector<int> a;
    int temp;
    int in;
    cin>>in;
    for(int i=0;i<in;i++){
        cin>>temp;
        a.push_back(temp);
    }
    int result = maxSubArray(a);
    cout<<"\n"<<result;
    return 0;
}
