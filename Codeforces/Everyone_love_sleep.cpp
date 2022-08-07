#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,H,M;
        cin>>n>>H>>M;
        int arr[n][2];
        for(int i=0;i<n;i++){
            cin>>arr[i][0];
            cin>>arr[i][1];
        }
        int min_H=INT_MAX,min_M=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i][0]<H){
                int Hours = 24 - H + arr[i][0];
                if(Hours<=min_H){
                    // min_H = Hours;
                    // if(arr[i][1]-M<=min_H){
                    //     min_M = arr[i][1]-M;
                    // }

                    if(arr[i][1]<M){
                        min_H = Hours-1;
                        int minutes = 60-M+arr[i][1];
                        min_M = minutes;
                    }else{
                        min_H = Hours;
                        min_M = arr[i][1]-M;
                    }
                }
            }
            else{
                if(arr[i][0]-H<=min_H){
                    
                    if(arr[i][1]<M){
                        min_H = arr[i][0]-H-1;
                        int minutes = 60-M+arr[i][1];
                        min_M = minutes;
                    }else{
                        min_H = arr[i][0]-H;
                        min_M = arr[i][1]-M;
                    }
                }
            }
            
        }


        cout<<min_H<<" "<<min_M<<endl;
    }

    return 0;
}