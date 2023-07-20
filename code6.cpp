#include<iostream>
using namespace std;
int main(){
// Here we have the pattern of star pyramid.
int n;
  cin>>n;
  for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
	 if(j<=n-i){
		 cout<<" ";
	 }
	 else{cout<<"*";
 }
  }
for(int k=2;k<=i;k++){
		cout<<"*";
}



	  cout<<" "<<endl;
  }
    return 0;
}