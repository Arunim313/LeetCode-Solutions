class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int R  = accounts.size();
        int C = accounts[0].size();
        int maxi = -1;
        
        for(int row=0; row<R; row++){
            int rowsum = 0;
            for(int col=0; col<C; col++){
                rowsum += accounts[row][col];
            }
            if(rowsum > maxi){
                maxi = rowsum;
            }
        }
        return maxi;
    }
};