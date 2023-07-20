#include<iostream>
using namespace std;
int main(){
// we'll make hollow rectangle pattern now.
int row,column;
cout<<"Enter the number: "<<endl;
cin>>row;
cin>>column;

for(int i=1;i<=row;i++){
    
    for(int j=1;j<=column;j++){
    
        if(i==1 || i==row || j==1 || j==column ){
            cout<<"*";

        }
    
             
        else{
            cout<<" ";
        }  

    } 

cout<<endl;
}



return 0;
}
