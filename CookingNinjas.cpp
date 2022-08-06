// Code Studio

bool isPossible(vector<int>& rank, int m, int mid, int n){
    int totalDishes = 0;
    for(int i = 0; i < n; i++){
        int time = 0, dish = 0;
        while(time + ((dish+1)*rank[i]) <= mid){
            time += (dish+1)*rank[i];
            dish++;
        }
        totalDishes += dish;
        if(totalDishes >= m) return true;
    }
    return false;
}

int minCookTime(vector<int> &rank, int m)
{
    // Write your code here
    int n = rank.size();
    int e = 0, ans = -1;
    for(int i = 1; i <= m; i++) e += i*rank[n-1];
    int s = 0;
    int mid = s + (e - s)/2;
    while(s <= e){
        if(isPossible(rank, m, mid, n)){
            ans = mid;
            e = mid - 1;
        }
        else s = mid + 1;
        mid = s + (e-s)/2;
    }
    return ans;
}