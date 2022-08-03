class Solution {
public:
    
    int binarySearch(vector<int>& nums, int target){
    int start = 0;
    int end = nums.size() - 1;

    int mid = start + (end - start)/2;

    while(start<=end){

        if( nums[mid] == target ){
            return mid;
        }

        if(target > nums[mid] ){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
    }
    return -1;
}
    
    int position(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int ans = 0;
        int mid = start + (end - start)/2;

        while(start<=end){

            if( nums[mid] == target ){
                return mid;
            }

            if(target > nums[mid] ){
                start = mid + 1;
                ans = start;
            }
            else{
                end = mid - 1;
            }

            mid = start + (end - start)/2;
        }
        return ans;
    }
    
    
    int searchInsert(vector<int>& nums, int target) {
        int ans = binarySearch(nums, target);
        
        if(ans == -1){
            ans = position(nums, target);
        }
        return ans;
    }
};