class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int> s(nums.begin(),nums.end());
        vector<int> v(s.begin(),s.end());

        for(int i =0; i<v.size(); i++){
            int ans = v[i];
            nums[i]=v[i];
        }
        
        return v.size();
    }
};