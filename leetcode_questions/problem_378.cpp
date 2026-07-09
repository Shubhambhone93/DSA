#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,5,9},{10,11,13},{12,13,15}};
    int k = 8;
     vector<long long>newarr;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                newarr.push_back(matrix[i][j]);
            }
        }
        // sort(newarr.begin(),newarr.end());
        cout<<newarr[k-1];
return 0;
}