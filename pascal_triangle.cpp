#include<iostream>
using namespace std;

int pascal_triangle(int n){
    int product=1;
    for(int i=1;i<=n;i++){
        
        product=product*i;
    }
    return product;

}



int main(){
    int n;
    cin>>n;
cout<<"1";
 for(int i=1;i<n;i++){
    cout<<" "<<endl;
    for(int j=0;j<=i;j++){
        int a=pascal_triangle(i);
        int b=pascal_triangle(j);
        int c=pascal_triangle((i-j));
        cout<<a/(b*c)<<" ";
          }
 }
    return 0;
}
// shabaash tmne kr dikhaya...