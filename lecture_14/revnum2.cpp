#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;
    while(n){

        rev=rev+n%10;
        n=n/10;
    }
    cout<<rev<<endl;
    cout<<abs(rev)<<endl;
return 0;
}
