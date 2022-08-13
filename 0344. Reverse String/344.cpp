class Solution {
public:
    void reverseString(vector<char>& s) {
        int e=s.size()-1;
        int st=0;
        while(st<e){
            swap(s[st], s[e]);
            st++;
            e--;
        }
    }
};