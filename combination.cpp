#include<iostream>
using namespace std;

int factorial(int n){
    int product=1;
         for(int i=1;i<=n;i++){
        
            product=product*i;
         }
         return product;
}

int main(){
    int val1,val2,val3;
    int n,r;
    cout<<"Enter the factorial and its partner."<<endl;
    cin>>n>>r;
    val1= factorial(n);
    val2= factorial(r);
    val3= factorial((n-r));

    cout<<val1/(val2*val3);

    
    return 0;
}