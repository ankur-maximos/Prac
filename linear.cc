#include<iostream>
#include<vector>
#include<chrono>
#include<time.h>
using namespace std;
using namespace std::chrono;

// linear function to search
bool linearSearch(vector<int> &v,int key) {
    for(int i = 0;i<v.size();i++) {
        if(v[i] == key) {
            return true;
        }
    }
    return false;
}

bool recurseLinearSearch(vector<int> &v,int start,int end, int key) {
    if(end==start && start>=0 && key==v[start]) {
        return true;
    }
    if(start<end) {
    int mid = (end+start)/2; 
    //cout<<mid<<" ";   
    if(recurseLinearSearch(v,start,mid,key) || recurseLinearSearch(v,mid+1,end,key)) {
        return true;
    }
    }
    return false;
}

int main() {
    freopen("input.txt","r",stdin);    
    int key;
    cin>>key;
    int num;
    cin>>num;
    vector<int> input;
    int temp;
    for(int i=0;i<num;i++) {
        cin>>temp;
        input.push_back(temp);
    }
    bool result1,result2;
    //high_resolution_clock::time_point t1 = high_resolution_clock::now();
    clock_t t1,t2,t3;
    t1 = clock();
    result1 = linearSearch(input, key);
    t2 = clock() - t1;
    //high_resolution_clock::time_point t2 = high_resolution_clock::now(); 
    result2 = recurseLinearSearch(input, 0, (input.size()-1), key);
    //high_resolution_clock::time_point t3 = high_resolution_clock::now();
    //auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1); 
    //auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1);
    t3 = clock() - t1 - t2;
    cout<<"result1: "<<result1<<"time: "<<((float)t2)/CLOCKS_PER_SEC<<" "<<t2<<"\n";
    cout<<"result2: "<<result2<<"time: "<<((float)t3)/CLOCKS_PER_SEC<<" "<<t3<<"\n";
    return 0;
}
