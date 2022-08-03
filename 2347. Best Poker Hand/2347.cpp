class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        if(std::count(suits.begin(),suits.end(),suits[0])==5)
           {
               return "Flush";
           }
         int count=0;
         bool flag=true;
        
        for(int i =0;i<5;i++)
        {   
           int x=std::count(ranks.begin(),ranks.end(),ranks[i]);
            
            cout<<ranks[i]<<" " <<x<<endl;
            if(x>=3) return "Three of a Kind";
            else if(x==2) flag=false;
        }
        if(flag==false) return "Pair";
        return "High Card";
    }
};