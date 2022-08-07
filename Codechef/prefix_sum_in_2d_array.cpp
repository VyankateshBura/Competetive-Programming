/*
Given 2d array a of N*N integers.Given Q queries and in each query given a,b,c and d print sum of square represented by (a,b) as top leftpoint and (c,d) as bottom right point 

Constraints
1<=N<=10^3
1<=a[i][j]<=10^6
1<=Q<=10^5
1<= a,b,c,d <=N
*/

//Brute force approach

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+10;
// int arr[N][N];
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cin>>arr[i][j];
//         }
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int a,b,c,d,sum=0;
//         cin>>a>>b>>c>>d;
//         for(int i=a;i<=c;i++){
//             for(int j=b;j<=c;j++){
//                 sum+=arr[i][j];
//             }
//         }
//         cout<<sum<<endl;
//     }

// }

//prefix sum approach

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int arr[N][N];
int pf[N][N];
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
            pf[i][j] = arr[i][j]+pf[i-1][j]+pf[i][j-1]+pf[i-1][j-1];
        }
    }

    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int ans;
        ans = pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];
        cout<<ans<<endl;
    }

}