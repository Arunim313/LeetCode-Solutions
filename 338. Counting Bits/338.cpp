class Solution {
public:
    int counter(int x )
    {   
        int count = 0;
        if(x==1 || x==2) return 1;
        while(x!=0)
        { 
         if(x&1)
         {
             count++;
         }
            x=(x>>1);
         }
        return count ;
        
        
     }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i =0;i<n+1;i++){
        cout<<"i = "<<i<<"  "<<endl;
            int count = counter(i);
            ans.push_back(count);
        }
        return ans;}
};