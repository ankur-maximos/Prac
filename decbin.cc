#include<iostream>
#include<vector>
#include<string>
using namespace std;

string findDigitsInBinary(int A) {
    string results;
    int size_count = 64;
    vector<short> temp(size_count);
    int temp_num = A;
    while(temp_num>0) {
        int r = temp_num%2;
        temp[--size_count] = r;
        temp_num/=2;
    }
    if(A == 0) {
        temp[--size_count] = 0;
    }
    for(int i = size_count;i<temp.size();i++) {
        results+=to_string(temp[i]);
    }
    return results;
}

int main() {
    freopen("input.txt","r",stdin); 
    int in;
    cin>>in;
    string str = findDigitsInBinary(in);
    cout<<str; 
    return 0;
}
