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
        for(int j=1;j<=l1;j++){
            if((j==l2&&l1-j==l3)||(j==l3&&l1-j==l2)){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag!=1){
            for(int j=1;j<=l2;j++){
                if((j==l1&&l2-j==l3)||(j==l3&&l2-j==l1)){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag!=1){
            for(int j=1;j<=l3;j++){
                if((j==l2&&l3-j==l1)||(j==l1&&l3-j==l2)){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
            }
        }
        
        if(flag!=1){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}