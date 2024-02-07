#include<iostream>
using namespace std;
// here we'll print inverted half pyramid.
int main(){
    //  int rows,col;
    // cout<<"Enter the rows and col please: "<<endl;
    // cin>>rows>>col;
   

    // for(int i=1;i<=rows;i=1+i){
        
    // for(int j=1;j<=col;j=j+1){
    //     cout<<"*";
    // }
    // cout<<" "<<endl;
    // }

// for(int i=1;i<=rows;i++){
// for(int j=1;j<=col;j++){


//     if(i==1 || i==rows || j==col || j==1){
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }

// }
// cout<<endl;
// }
int n=5;
for(int j=n; j>=1;j--){
for(int i=1;i<=j;i=i+1){
    cout<<"*";
}
cout<<" "<<endl;
    }   
    
 return 0;
}
