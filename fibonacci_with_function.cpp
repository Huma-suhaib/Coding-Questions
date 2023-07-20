#include<iostream>
using namespace std;
 
 void fibonacci(int n){
    int a=0,b=1,c;
    cout<<b<<" ";
    while(a<=n){
    c=a+b;
    a=b;
    b=c;
    cout<<c<<" ";

            
    }

 }

int main(){
    int n;
    cout<<"Enter the number you want the series for: "<<endl;
    cin>>n;
    
   fibonacci(n);
    
    return 0;
}