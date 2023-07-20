#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,n,c;
    cout<<"The enter number you want the sum for:";
    cin>>n;
    cout<<b<<" ";
    while(a<=n){
        
        c=a+b;
        a=b;
        b=c;
    cout<<c<<" ";
    }
    

    return 0;
}   