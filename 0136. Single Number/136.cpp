class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        for(int i =0; i<nums.size(); i++){
            
            int counter = count(nums.begin(),nums.end(),nums[i]);
            
            if(counter == 1){
                return nums[i];
            }
        }
        return 0;
    }
};
