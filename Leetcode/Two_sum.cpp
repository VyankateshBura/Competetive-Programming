/*This is the two sum program in which there is a target value and an array as input we have to find two values in the array such that the addition of the two elements in the array is equal to the target value and we have to return the index of the two elements*/

// Approach 1(two pointer approach)
/*Create a vector with data type pair and in each pair store the value of the element in the array and its index and then sort that vector. After sorting declare two variable start and end with starting and ending index and then move this two pointers and update on the basis that if the addition of a[start]+a[end]<target the move the start to to right and if a[start]+a[end]>target move the end pointer towards left*/

// Time Complexity of :O(NlogN)
//Space Complexity of :O(N);
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int s=0,e=v.size()-1;
        while(s<e){
            if(v[s].first+v[e].first>target){
                e--;
            }
            else if(v[s].first+v[e].first<target){
                s++;
            }
            else{
                return {v[s].second,v[e].second};
            }
        }
        return {-1,-1};
    }
};
int main(){

    return 0;
}