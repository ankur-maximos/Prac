#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int> > A) {
    //vector<int> result;
    // DO STUFF HERE AND POPULATE result
    int rows = A.size();
    int cols = A[0].size();
    vector<int> result(rows*cols);
    int loc=0;
    int left = 0;
    int right = cols-1;
    int top = 0;
    int bottom = rows-1;
    
    int dir = 0; //direction
    while(left<=right && top<=bottom) {
        if(dir == 0) {
            for(int i = left;i<=right; i++) {
            result[loc++] = A[top][i];
            }
            top++;
            dir = 1;
        } else if(dir == 1) {
            //print right elements
            for(int i = top;i<=bottom;i++) {
                result[loc++] = A[i][right];
            }
            right--;
            dir = 2;
        } else if(dir == 2) {
            for(int i = right;i>=left;i--) {
                result[loc++] = A[bottom][i];
            }
            bottom--;
            dir = 3;
        } else if(dir == 3) {
            for(int i = bottom;i>=top;i--) {
                result[loc++] = A[i][left];
            }
            left++;
            dir = 0;
        }
    }
    
    return result;
}


int main() {
    //declare vector of size 10
    /*
    vector<int> v(10);
    cout<<v.capacity();
    v.at(100) = 10;
    //print size of vector
    cout<<v.size()<<"\n";

    vector<int> v1;
    v1.reserve(10);
    cout<<v1.capacity()<<" "<<v1.size();
    cout<<v1[1];*/
    vector<vector<int> > a;
    int temp;
    for(int i = 0;i < 3;i++) {
        vector<int> temp1; 
        for(int j = 0;j < 2;j++) {
            cin>>temp;
            temp1.push_back(temp);
        }
        a.push_back(temp1);
    }  
    vector<int> result = spiralOrder(a);
    for(int i=0;i<result.size();i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}
