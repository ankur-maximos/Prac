#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;

string reverse(string str){
    //string temp = "";
    int len = str.length()-1;
    for(int i = 0;i<str.length()/2;i++) {
        char temp = str[i];
        str[i] = str[len-i];
        str[len-i] = temp;
    }
    return str;
}

string binary(int num) {
    int n = 1;
    string str = "";
    n = num;
    while(n>0) {
        //int temp = n%2;
        str += to_string(n%2);
        n/=2;
    }
    return reverse(str);
}

int main() {
    //freopen("input.txt","r",stdin); 
    int n;
    cin>>n;
    string str = binary(n);
    str = reverse(str);
    int temp = 0;
    int sum = 0;
    cout<<str<<"\n";
    for(int i=0;i<str.length();i++) {
        if(str[i] == '1') {
            temp = pow(2,i);
            sum += temp;
            cout<<temp<<" + ";
        }
    }
    cout<<"\n"<<sum;
    return 0;
}
