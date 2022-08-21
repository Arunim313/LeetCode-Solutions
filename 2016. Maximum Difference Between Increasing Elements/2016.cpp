class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];
        int ans = -1;
        
        for(int i = 1; i < nums.size(); i++){
            
            int diff = nums[i] - mini;
            ans = max(ans, diff);
            mini = min(mini, nums[i]);
            
        }
        return (ans<=0)?-1:ans;
    }
};