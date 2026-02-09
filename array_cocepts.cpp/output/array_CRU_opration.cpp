#include<iostream>
using namespace std;
int main(){
    //create
    //frist way
    int arr[5];
    //second way
    int arr_b[ ]={1,2,3,4,5};
    //third way
    int n;
    cin>>n;

    //read
    //for loop using sizeof
    int s=sizeof(arr_b)/sizeof(int);
    for(int i=0;i<s;i++){
        cout<<arr_b[i]<<" ";
    }
    cout<<endl;
    //update
    int arr[i];
    for(int i=0;i<s;i++){
        arr[i]+=i;
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}