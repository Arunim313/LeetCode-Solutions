class Solution {
public:
    
    bool isPossible(vector<int> weights, int days, int n, int mid){
        int totalWeight = 0;
        int totalDays = 1;
        
        for( int i=0; i<n; i++){
            if( totalWeight + weights[i] <= mid){
                totalWeight += weights[i];
            }
            else{
                totalDays++;
                totalWeight = 0;
                if(totalDays > days || weights[i] > mid){
                    return false;
                }                
                totalWeight += weights[i];
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int sum = 0;
        int n = weights.size();
        int max = 0;
        for(int i=0; i<n; i++){
            sum += weights[i];
            if( weights[i] > max ){
            max = weights[i];
        }
        }
        
        int s = max;
        // int s = 0;
        int e = sum;
        int mid = s + (e-s)/2;
        int ans = -1;
        
        while( s<=e ){
            if(isPossible(weights, days, n, mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};