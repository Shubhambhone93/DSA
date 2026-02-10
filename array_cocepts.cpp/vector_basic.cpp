#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //intialization
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    //size
    cout<<a.size()<<endl;
    a.pop_back();
    //capacity
    cout<<a.capacity()<<endl;
    
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    //frist element find
    cout<<a.front()<<endl;
    //last element find
    cout<<a.back()<<endl;
    //add element from starting and ending starting se + ending se -
    a.insert(a.begin()+2,6);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    //for reverse array
    reverse(a.begin(),a.end());

    // for sort 
    sort(a.begin(),a.end());
    return 0;
}