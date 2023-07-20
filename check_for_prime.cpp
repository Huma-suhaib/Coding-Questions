#include<iostream>
using namespace std;
bool prime(int n){
    int i=2;
    bool check=true;
    while(i<n){
        if(n%i==0){
             cout<<false;
             check=false;    
            //  iska mtlb hai ki beech me kahi vo number kisi se divide ho gya 
            // iska mylb vo number composite hai.to check false ho gya.fir break
            //  hokr hm bahar aaye to if ne puchha agr ek jagah bhi false nhi hai to
            // yani check=true tha to print krdo prime hai but agr kahi bhi beech me
            // false hua yani vo composite number tha so dont print prime
            break;
        }
        i++;
        
    }
    if(check==true){
        cout<<check;
    }
    return true;

}

int main(){
    int n;
    cin>>n;
  prime(n);
  
  
    
    return 0;
}