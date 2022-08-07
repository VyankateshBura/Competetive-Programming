/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int find(long int arr[],int N,long int find){
    for(int i=0;i<N;i++){
        if(arr[i]==find){
            return i;
        }
    }
}
int min(long int a,long int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    int t;
    long int res=INT_MAX;
    cin>>t;
    for(int i=0;i<t;i++){
        int N;
        cin>>N;
        long int arr[N];
        for(int j=0;j<N;j++){
            cin>>arr[j];
        }
        for(long int k=0;k<N*N;k++){
            long int maximum = *max_element(arr,arr+N);
            long int minimum = *min_element(arr,arr+N);
            res = min((maximum-minimum),res);
            long int ind1 = find(arr,N,maximum);
            long int ind2 = find(arr,N,minimum);
            arr[ind1]--;
            arr[ind2]++;
            
        }
        
        
    }
    cout<<res<<endl;
    return 0;
}