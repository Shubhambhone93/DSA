#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=300 && n<=460){
        cout<<"macbook";
    }else if(n>=200 && n<=280){
        cout<<"kurkure";
    }else if(n>=1100 && n<=1500){
        cout<<"cycle";
    }else if(n>50 && n<=80){
        cout<<"bike";
    }else{
        cout<<"better luck next time";
    }
    return 0;
}