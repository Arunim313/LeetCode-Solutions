class Solution {
public:
    string removeDuplicates(string s) {
        
        string ans;
        for(int i=0;i<s.size();i++){
            if(ans.back()==s[i]) {
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
    
//     Another Approach
    
//         stack<char> st;
        
//         for(int i=0;i<s.size();i++){
//             if( st.empty() || st.top()!= s[i]){
//                 st.push(s[i]);
//             }
//             else{
//                 st.pop();
//             }
//         }
        
//         string ans = "";
//         while(!st.empty()){
            
//             ans = st.top() + ans; //concatenate
//             st.pop();
//         }
//         return ans;
//     }
};