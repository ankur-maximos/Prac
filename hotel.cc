#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

bool hotel(vector<int> &arrive, vector<int> &depart, int K) {
     bool result = true;
     sort(arrive.begin(),arrive.end());
     sort(depart.begin(),depart.end());
     int a=0,d=0;
     int count = 0;
     while(a<arrive.size()) {
       if(arrive[a]<depart[d]) {
           count++;
           a++;
       } else if (arrive[a]>depart[d]) {
           count--;
           d++;
       } else {
            a++;d++;
       }
       if(count>K) {
           result = false;
           break;
       }
     }
     return result;   
}


int main() {
    freopen("input.txt","r",stdin); 
    int n;
    cin>>n;
    vector<int> arrive(n);
    int temp;
    for(int i=0;i<n;i++) {
        cin>>temp;
        arrive[i] = temp;
    }
    cin>>n;
    vector<int> depart(n);
    for(int i=0;i<n;i++) {
        cin>>temp;
        depart[i] = temp;
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++) {
        cout<<arrive[i];
        cout<<depart[i];
    }  
    cout<<k;
    cout<<hotel(arrive,depart,k);
    return 0;
}
