#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

int getMaxNum(string a,string b) {
    string str1 = a+b;
    string str2 = b+a;
    int i = str1.compare(str2);
    if(i>=0)
    return 1; 
    else 
    return 0;
}


string largestNumber(const vector<int> &A) {
    vector<vector<string> > list(10);
    vector<string>::iterator it;
    for(int i=0;i<A.size();i++) {
        string temp = to_string(A[i]);
//        cout<<temp;
        int loc = temp.at(0) - 48;
        if(list[loc].empty()) {
            list[loc].push_back(temp);
        } else {
            for(it=list[loc].begin();it<list[loc].end();it++) {
//               cout<<*it<<" "; 
            }
            bool flag = false;
            for(it=list[loc].begin();it<list[loc].end();it++) {
                string temp2 = *it;
                int t = getMaxNum(temp,temp2);
//              cout<<temp2;
                if(t == 1) {
                    list[loc].insert(it, temp);
                    flag = true;
                    break;
                }
            }
            if(!flag) {
               list[loc].push_back(temp); 
            }
        }
    }
//    cout<<list[9][0];
    string output = "";
    bool flag = false;
    for(int i = 9;i>=0;i--) {
        for(int k = 0;k<list[i].size();k++) {
    //        cout<<list[i][k];
            if(i!=0) flag = true;
            output+=list[i][k];
        }
    }
    if(!flag) output = "0";
    return output;
}


int main() {
    freopen("input.txt","r",stdin);    
    vector<int> temp;
    int in;
    for(int i=0;i<5;i++) {
    cin>>in;
    temp.push_back(in);
    }
    vector<int>::iterator it;
  /*  for(it = temp.begin();it<temp.end();it++) {
        
        if(*it == 30 && temp.size()==5) {
//            temp.insert(it,67);
            
        }
//        cout<<*it<<" ";
    } */
    cout<<largestNumber(temp);
    return 0;
}
