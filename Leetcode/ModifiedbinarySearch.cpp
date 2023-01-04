/* Find if the target value exists in the given rotated sorted array*/

//Time and Space Complexity
//Time = O(logn)
//Space = O(1)

bool ModifiedBinarySearch(vector<int> nums){
    int start = 0;
    int end = nums.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid]==target){
            return true;
        }
        if(nums[start]==nums[mid]||nums[end]==nums[mid]){
            start++;
            end--;
        }
        else if(nums[start]<=nums[mid]){
            if(nums[start]>=target&&nums[mid]<target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{
            if(nums[end]<=target&&nums[mid]>target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        return false;
    }
}
