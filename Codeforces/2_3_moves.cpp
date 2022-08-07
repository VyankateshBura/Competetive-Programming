#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        long int n,count=0;
        cin>>n;
       if(n>0){
           int by_3,by_2;
           if(n%3==1){
                by_3 = n/3 + 2;
           }
           else if(n%3==0){
               by_3 = n/3;
           }else{
                by_3 = n/3 + 1;
           }
           if(n%2==1){
               by_2 = n/2 + 2; 
           }else{
               by_2 = n/2;
           }
           
           count = min(by_2,by_3);
           
          
        
       }else{
            int by_3,by_2;
           if(n%3==-1){
                by_3 = abs(n/3 )+ 2;
           }
           else if(n%3==0){
               by_3 = n/3;
           }else{
                by_3 =  abs(n/3 ) + 1;
           }
           if(n%2==-1){
               by_2 = abs(n/2 )+ 2; 
           }else{
               by_2 = abs(n/2);
           }
           
           count = min(by_2,by_3);
       }
       
       cout<<count<<endl;
    }
    
    return 0;
}