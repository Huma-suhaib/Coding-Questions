#include<iostream>
using namespace std;
int main(){

// here we are learning about some simple patterns.
// int rows,columns;
// cout<<"Enter the number of rows and columns of the pattern. ";

// cin>>rows;
// cin>>columns;
// for(int i=1;i<=rows;i=1+i){
//     int c=1;
//     while(c<=columns){
//         if(i%2==0){
//             cout<<"0";
//         }
//         else{cout<<"1";}
//         c=c+1;
//     }
//     cout<<""<<endl;
// }

  int n;
  cin>>n;
  for(int i=2;i<=n;i++){
  for(int j=2;j<i;j++){
	  if(i%j!=0){
		  cout<<i<<endl;
          } else if (i%j == 0) {
            break;
          }
  }
  }
  cout<<n;
    return 0;
}