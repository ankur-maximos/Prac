#include<math.h>
#include<iostream>
using namespace std;
int main() {
    int test_input= 81;
    float p = 1/4.0;
    int k = pow(test_input,p);
    cout<<k;
    if(k*k == test_input)
    cout<<k;
    else cout<<"doesn't work";
}
