#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int rem = 1;
    int count = 0;
    for(int i=A.size()-1;i>=0;i--) {
       if(rem == 1) {rem = A[i]+rem;}
       if(rem==10) {
            A[i] = 0;
            rem = 1;
        }  else {
            A[i] = rem;
            rem = 0;
            break;
        }
    }
    if(rem != 1) {
    for(int i=0;i<A.size();i++){
        if(A[i] == 0){ count++;}
        else break;
    }
     A.erase(A.begin(),A.begin()+count);
    } else {
        A.insert(A.begin(), 1);
    }
    return A;
}

int main() {
    freopen("input.txt","r",stdin);
    int num;
    cin>>num;
    vector<int> v(num);
    for(int i=0;i<num;i++){
        cin>>v[i];
    }
    plusOne(v);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
