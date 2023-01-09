#include<bits/stdc++.h>

using namespace std;
int maximumSubarraysum(int* arr,int n){
    int global_max = INT_MIN;
    int local_max = 0;
    for(int i=0;i<n;i++){
        local_max = max(arr[i],arr[i]+local_max);
        if(local_max>global_max){
            global_max = local_max;
        }
    }
    return global_max;
}

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout<<" The maximum subarray sum is: "<<maximumSubarraysum(arr,8);

    return 0;
}