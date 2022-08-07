// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         vector<vector<int>> result;
        
//         //Sorting the whole array according to the first index of each subvector
//         sort(intervals.begin(),intervals.end());
//         int ind1 = 0;
        
//         //Inserting the first subvector into the result vector
//         vector<int> temp;
//         temp.push_back(intervals[0][0]);
//         temp.push_back(intervals[0][1]);
//         result.push_back(temp);
//         temp.clear();
        
        
//         for(int i=1;i<intervals.size();i++){
            
//             //Checking if the value at each position is greater than the result index first value and less than result second value
//             //If above condition meet insert the maximum of result second and the current index second value
//             if(intervals[i][0]>=result[ind1][0]&&intervals[i][0]<=result[ind1][1]){
//                 result[ind1][1] = max(intervals[i][1],result[ind1][1]);
//             }
//             else{
                
//                 //If the value doesn't meet the requirement then insert new vector
//                 ind1++;
//                 temp.push_back(intervals[i][0]);
//                 temp.push_back(intervals[i][1]);
//                 result.push_back(temp);
//                 temp.clear();
                
//             }
            
//         }
//         return result;
        
        
//     }
// };