#include<iostream>
#include<climits>
using namespace std;
//max element
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(ans>arr[i]){
            ans=arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}