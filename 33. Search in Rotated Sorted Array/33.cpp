class Solution {
public:
    int search(vector<int>& nums, int target) {
           int s = 0;
    int e=nums.size()-1;
    int mid = s +(e-s)/2;
    while(s<e)
    {
        if(nums[mid]>=nums[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
            
        }
        mid=s+(e-s)/2;
    }
        int pivot=s;
        if(target>=nums[pivot] && target<=nums[nums.size()-1])
        {
            s=pivot;
            e=nums.size()-1;
        }
        else
        {
            s=0;
            e=pivot-1;
        }
        int res = search2(nums,target,s,e);
        return res;
       
    }
int search2(vector<int>& nums, int target,int s,int e) {
        
        int start =s;
        int end = e;
        int mid = start + (end-start)/2;
        while(start<=end)
        {
            if(nums[mid]==target)
            {
                return mid ;
            }
            else if (nums[mid]<target)
            {
                start = mid+1;
            }
            else 
            {
                end = mid-1 ;
            }
            mid = start + (end-start)/2;
        }
        
        return -1;
    }
};