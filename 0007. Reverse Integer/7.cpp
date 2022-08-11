class Solution {
public:
    int reverse(int x) {
        long int rev=0;
        while(x!=0){
            int n=x%10;
            rev = (rev*10)+n;
            if(rev>INT_MAX || rev<INT_MIN){ return 0 ;}
            x/=10;            
        }
        return rev;
        
    }
};