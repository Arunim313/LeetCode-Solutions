class Solution {
public:
    string defangIPaddr(string address) {
         string ans="";
    for(char i: address){
        if(i=='.'){
            ans+="[.]";
        }
        else{
            ans+=i;
        }
    }
    
    return ans;
    }
};