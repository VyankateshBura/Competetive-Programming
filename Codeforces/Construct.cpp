#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long int l1,l2,l3,flag=0;
        cin>>l1>>l2>>l3;
        if(flag!=1){
            if((l1==l2&&l3%2==0)||(l1==l3&&l2%2==0)||(l2==l3&&l1%2==0)){
                cout<<"YES"<<endl;
                flag=1;
            }
        }
        if(flag!=1){
            if((l1+l2==l3)||(l2+l3==l1)||(l1+l3==l2)){
                cout<<"YES"<<endl;
                flag=1;
            }
        }
        if(flag!=1){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}