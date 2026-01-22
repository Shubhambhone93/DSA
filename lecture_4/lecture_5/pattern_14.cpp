#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
for(i=1;i<=n;i++){
    for(int j=n;j>i;j--){
        cout<<j<<" ";
    }
    cout<<"* ";
    for(int k=i-1;k>=1;k--){
        cout<<k<<" ";
    }
    cout<<endl;
}
return 0;
}