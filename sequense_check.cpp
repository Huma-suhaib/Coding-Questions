#include<iostream>
using namespace std;

int main(){
    int n,prev,current;
    cin>>n;
    cin>>prev;
    bool isdec = true;
    for(int i=2;i<=n;i++){
        cin>>current;
        if(current>prev){
            if(isdec==true){
                isdec=false;
            }
        }
        else if(current==prev){

            cout<<"false";
            return 0;
        }
        if(current>prev){
            if(isdec==false){
                cout<<"false";
                return 0;
            }
        }
        prev=current;
    }
    cout<<"true";
    return 0;
}