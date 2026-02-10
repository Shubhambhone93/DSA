#include<iostream>
#include<climits>
using namespace std;
//sum of all element
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum Is :"<<sum;
    return 0;
}