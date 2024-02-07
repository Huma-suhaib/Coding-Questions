#include<iostream>
using namespace std;
// Here we will write number of rows and increasing numbers pattern(Floyd triangle).

int main(){
int n;
cout<<"Enter the numbers here: ";
cin>>n;
int sum=0;

for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
    sum=sum+1;
    cout<<sum<<" ";
}

cout<<endl;
}
return 0;
}
