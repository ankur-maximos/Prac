#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

void swap(int &a, int &b) {
int temp = a;
a = b;
b = temp;
}

int partition(vector<int> &a,int p,int r) {
int x = a[r];
int j = p-1;
int temp;
for(int i=p;i<=r-1;i++) {
if(a[i]<=x) {
j++;
/*temp = a[j];
a[j] = a[i];
a[i] = temp;*/
swap(a[j],a[i]);
}
}
/*temp = a[j+1];
a[j+1] = a[r];
a[r] = temp;*/
swap(a[j+1],a[r]);
return j+1;
}

void quicksort(vector<int> &a,int p,int r) { 
if(p>=r) {return;} 
int m = partition(a,p,r); 
//printf("%d ",m);
quicksort(a,p,m-1);
quicksort(a,m+1,r);
}

int compar(const void* p1,const void* p2) {
    int* val1 = (int*)p1;
    int* val2 = (int*)p2;
    return *val1-*val2;
}

vector<int> wave(vector<int> &A) {
    //quicksort(A, 0 , A.size()-1);
    qsort(&A[0], A.size(), sizeof(int), compar);
    for(int i=0;i<A.size();i+=2) {
        if(A[i]<A[i+1]) {
            swap(A[i], A[i+1]);
        }
    }
    return A;
}

int main() {
    vector<int> a;
    int temp;
    for(int i = 0;i<5;i++) {
        cin>>temp;
        a.push_back(temp);
    }
    vector<int> result = wave(a);
    for(int i=0;i<5;i++) {
       cout<<result[i]<<" ";
    }
    return 0;
}
