class Solution {
public:
    char repeatedCharacter(string s) {
        
        int n = s.size();
        for(int i=1; i<n; i++){
            for(int j=i-1; j>=0; j--){
                if(s[j] == s[i]){
                    return s[i];
                }
            }
        }
        return 0;        
    }
};
