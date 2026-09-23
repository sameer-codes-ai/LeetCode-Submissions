class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        if(nums[0]>x && nums[n-1]>x)return -1;
        int s=0;
        for(int i:nums)s+=i;
        if(s<x)return -1;
        if(s==x)return n;

        int sum=0, ans=-1, l=0, target=s-x;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>target){
                sum-=nums[l];
                l++;
            }

            if(sum==target){
                ans=max(ans,i-l+1);
            }
        }
        if(ans==-1)return -1;
        return n-ans;

    }
};