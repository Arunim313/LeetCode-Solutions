class Solution {
public:
    bool isPalindrome(int x) {
        long long  int ans = 0;
        long long int tempX = x;
        
        while(tempX > 0){
            
            long int sol = tempX % 10;
            ans = ans*10 + sol;
            tempX /= 10;
        }
        if(ans == x){
            return true;
        }
        else{
            return false;
        }
        
    }
};