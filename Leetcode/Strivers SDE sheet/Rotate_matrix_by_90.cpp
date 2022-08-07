// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
        
//         for(int i=0;i<matrix.size();i++){
//             for(int j=i;j<matrix[i].size();j++){
//                 swap(matrix[i][j],matrix[j][i]);
                
//             }
//         }
//         int n = matrix[0].size();
//         for(int i=0;i<n;i++){

//             //This has 0.1 more space complexity but 2ms less time complexity
// //             for(int j=0;j<n/2;j++){
// //                 swap(matrix[i][j],matrix[i][n-j-1]);
                
// //             }
//             reverse(matrix[i].begin(),matrix[i].end());
           
//         }
        
        
//     }
// };