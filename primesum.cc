#include<iostream>
#include<vector>
#include<math.h>
#include<set>
using namespace std;


vector<int> primesum(int A) {
    //vector<int> primes(A+1);
    //cout<<"i am fucked";
    bool* primes = new bool[A+1];
    vector<int> sol;
    set<int> primes_num;
    set<int>::iterator it1;
    for(int i=0;i<=A;i++) {
        primes[i] = 1;
    }
    primes[0] = false;
    primes[1] = 1;
    primes[2] = 1;
    cout<<"i am fucked";
    for(int i=2;i<=sqrt(A);i++) {
        if(primes[i] == 1) {
            primes_num.insert(i);
            for(int k = i*2;k<=A;k+=i) {
                primes[k] = 0;
                
            }
        }
    }
    
    for(it1=primes_num.begin();it1!=primes_num.end();it1++) {
       // cout<<*it1<<" ";
        int temp = A - *it1;
        bool test = primes[temp];
        if(test) {
            //cout<<*it<<" "<<temp;
            sol.push_back(*it1);
            sol.push_back(temp);
            break;
        }
    } 
    return sol;
}


int main() {
    freopen("input.txt","r",stdin); 
    int i = 16777214;

    vector<int> k = primesum(i);
    cout<<k[0]<<" "<<k[1];
    return 0;
}
