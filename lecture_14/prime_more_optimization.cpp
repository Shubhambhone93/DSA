#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans=true;
    //hum pehle se assume kr rhe hai ki num prime hoga
    for(int i=2;i<=sqrt(n);i++){
        if(n% i==0){
            ans=false;
        }
    }
    if(ans){
        cout<<"prime hai"<<endl;
    }
    else{
        cout<<"prime nhi hai"<<endl;
    }
    return 0;
}