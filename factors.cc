#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;

vector<int> allFactors(int A) {
        vector<int> result1;
        int count = sqrt(A);
        vector<int> result2(count);
        for(int i=1;i<=sqrt(A);i++) {
            if(A%i == 0) {
                result1.push_back(i);
                if((A/i) != sqrt(A))
                result2[--count] = A/i;
            }
        }
        result1.insert(result1.end(), result2.begin()+count, result2.end());
        return result1;
}

int titleToNumber(string A) {
    int out = 0;
    double len = (double)A.length();
    double c = 26.0;
    for(int i = 1;i<len;i++)
        out += pow(c, (double)i);
    for(int i=0;i<A.length();i++) {
        out+=pow(c,len-i-1)*(A[i]-65);
    }
    out += (A.at(A.length()-1) - 64);
    return out;
}


int main() {
    //int in;
    string str;
    cin>>str;
    //vector<int> result = allFactors(in);
    //for(int i=0;i<result.size();i++) {
      //  cout<<result[i]<<" ";
    //}
    int res = titleToNumber(str);
    cout<<res;
    return 0;
}
