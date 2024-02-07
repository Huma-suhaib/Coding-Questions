#include<iostream>
using namespace std;
int main(){
    // now we'll make pattern for right side triangle.

// int n=5;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         if(j<=n-i){
//             cout<<" ";
//         }
//         else{ cout<<"*";}
//     }
//     cout<<" "<<endl;
// }
int n;
cin>>n;

for(int i=1;i<=n;i++){
for(int j=i;j<n;j++){
    cout<<" "<<" ";  
}
for(int sum=0;sum<i;sum++){
    cout<<sum+i<<" ";
    }



    cout<<"\n";
}

    return 0;
}
