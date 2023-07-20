#include<iostream>
using namespace std;

int main(){
    int n;
    int largest=-2147483648;
    int second_largest=-2147483648;
        for(int i=1;i<=n;i++){
        cin>>n;
        if(n>largest){
            second_largest=largest;
            largest=n;
        }
        else if(n>second_largest && n<largest){
            second_largest=n;
        }
    }
    cout<<second_largest;
    return 0;
}