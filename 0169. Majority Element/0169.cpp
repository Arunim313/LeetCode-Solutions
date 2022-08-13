class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        // int ans = 0;
        int counter = 0;
        int n = nums.size();
        
        if(n==1) return nums[0];
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                counter++;
                // ans = nums[i];
                if(counter >= n/2) {
                    return nums[i];
                }
            }
        }
        return 0;
    }
};


