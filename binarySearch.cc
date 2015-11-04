#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int binarySearch(vector<int> intervals, int num, int start) {
       int len = intervals.size();
       int left = 0;
       int right = len-1;
       if(start == 0) {
        while(left<=right) {
           int temp = left+right/2;
           if(left == len-1 && right == len-1) return -1;
           if(intervals[temp]<=num && intervals[temp+1]>num) {
               return temp;
           } else if(intervals[temp+1]<=num) {
               left = temp+1;
           } else {
               right = temp-1;
           }
        }
       } else {
            while(left<=right) {
           int temp = (left+right)/2;
           if(intervals[temp]<=num && intervals[temp+1]>num) {
               return temp;
           } else if(intervals[temp+1]<=num) {
               left = temp+1;
           } else {
               right = temp-1;
           }
        }
       }
}    

int main() {
    freopen("input.txt","r",stdin); 
    vector<int> num;
    int temp;
    for(int i=0;i<2;i++) {
        cin>>temp;
        num.push_back(temp);
    }
    cout<<binarySearch(num, 8, 0);
    return 0;
}
