// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
        
//         //O(Nlogn) time complexity and O(1) space complexity approach
//         // sort(nums.begin(),nums.end());
//         // for(int i=0;i<nums.size();i++){
//         //     if(nums[i]==nums[i+1]){
//         //         return nums[i];
//         //     }
//         // }
        
//         //O(N) time complexity and O(N) space complexity approach
//         int hash[100010] ={0};
//         for(int i=0;i<nums.size();i++){
//             hash[nums[i]]++;
//             // cout<<hash[nums[i]]<<endl;
//             if(hash[nums[i]]==2){
                
//                 return nums[i];
//             }
//         }
//         return -1;
        
//     }
// };