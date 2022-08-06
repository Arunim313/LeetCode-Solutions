bool isPossible(vector<int> &stalls, int k, int n, int mid){
    int cowCount = 1;
    int lastPosition = stalls[0];
    
    for(int i=0; i<n; i++){
        if( stalls[i]-lastPosition >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int maxi = 0;
    
    for(int i=0; i<n; i++){
        maxi = max(maxi, stalls[i]);
    }
    
    int s = 0; 
    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while( s<=e ){
        if(isPossible(stalls,k,n,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}