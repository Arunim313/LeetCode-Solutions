class Solution {
public:
    int findDuplicate(vector<int>& nums){
        sort(nums.begin(), nums.begin() + nums.size());
        for(int i=0; i<nums.size(); i++){
            
            if((nums[i] ^ nums[i+1]) == 0){
                return nums[i];
            }
        }
        return 0;        
    }
};