class Solution{
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;  //Map to store the frequency of the characters
        
        for(int i=0;i<s.size();i++){
            m[s[i]]++;       //Updating map w.r.t. to s[i] as a key and its value is frequency(its occurance)    
        }
        
        for(int i=0;i<s.size();i++){  //Here we are again using string to travese  but this time instead of updating the map we                                                              are comparing the occurance(if the element is occuring for the first time then we are returning it)
       
        if(m[s[i]]==1)    
            return i; 
        }
        return -1;  //If no elements are unique then return -1
    }
};

