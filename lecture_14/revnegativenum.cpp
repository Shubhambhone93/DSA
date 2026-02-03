#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem=0;
    while(n){
        rem=10*rem+n%10;
        n=n/10;
    }
    cout<<rem;
}