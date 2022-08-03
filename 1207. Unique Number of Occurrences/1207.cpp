class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int initial[2001] = {0};
        int count[1001] = {0};
        int size = arr.size(); 
        
        for(int a = 0; a < size; a++){
            /*
            * As size is -1000 to 1000
            * And index cannot be negative, so starting from 1000 + number index
            */
            initial[1000+arr[a]]++; 
        }
        
        for(int i = 0; i <=2000; i++ ) {
            if(initial[i] == 0) continue;
            
            count[initial[i]]++;
            if(count[initial[i]] > 1) {
                return false;
            }
        }
        return true;
    }
};