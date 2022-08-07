#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            arr[i] = i+1;
        }
       
        
        if(N==1){
            cout<<1<<endl;
        }
        else if(N%2==0){
            for(int i=0;i<N-1;i=i+2){
                swap(arr[i],arr[i+1]);
            }
            
            for(int i=0;i<N;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;

        }
        else{
            for(int i=0;i<N-2;i=i+2){
                swap(arr[i],arr[i+1]);
            }
            swap(arr[0],arr[N-1]);
            for(int i=0;i<N;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}