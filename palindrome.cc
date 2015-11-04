#include<iostream>
#include<vector>
using namespace std;

int isPalindrome(int A) {
       unsigned int mul_10 = 1000000000;
       if((A/10) == 0) {
           return 1;
       }
       if(A<0) {
            return 0;
       }
       while(A/mul_10 == 0) {
            mul_10 /= 10;
       }
       while(A>0) {
          //start = pow(10.0,digits);
          if((A%10) != (A/mul_10)) return 0;
          A -= (A/mul_10) * mul_10;
          A/=10;
          mul_10/=100;
       }
       return 1;
}

string largestPalindrome(string s) {
    int len = s.length();
    int large = 0;
    string res = "";
    int temp1;
    int temp2;
    for(int i=1;i<2*len;i++) {
        int locallength = 0;
        if(i%2==0) {
        temp1 = i/2-1;
        temp2 = i/2;
        while(s[temp1]==s[temp2]) {
            temp1--;
            temp2++;
            locallength++;
            if(temp1<0 || temp2>=len) break;
        }
        
        } else {
            temp1 = i/2;
            temp2 = i/2; 
            while(s[temp1] == s[temp2]) {
                temp1--;
                temp2++;
                locallength++;
                if(temp1<0 || temp2>=len) break;
            }
        } 
        if(large<locallength) {
            large = locallength;
            res = "";
            for(int k=temp1+1;k<temp2;k++) {
                res+=s[k];
            }
        }
    }
    return res;
}

/*
char* largestPalindrome(char* S) {
    string s(S);
    int len = s.length();
    int large = 0;
    string res = "";
    for(int i=1;i<=len;i++) {
        int locallength = 0;
        int temp1 = i;
        int temp2 = i-1;
        while(s[temp1]==s[temp2]) {
            temp1--;
            temp2++;
            locallength++;
            if(temp1<0 || temp2>=len) break;
        }
        if(large<locallength) {
            large = locallength;
            res = "";
            for(int k=temp1+1;k<temp2;k++) {
                res+=s[k];
            }
        }
    }
    char* r = (char*)malloc(res.length()+1);
    for(int i=0;i<res.length();i++) {
        r[i] = res[i];
    }
    r[res.length()] = '\0';
    return r;
} */

int main() {
    string str;
    cin>>str;
    cout<<largestPalindrome(str);
    //freopen("input.txt","r",stdin);    
    //int in;
    //cin>>in;
    //cout<<INT_MAX<<"\n";
    //cout<<isPalindrome(in)<<"\n";
    return 0;
}
