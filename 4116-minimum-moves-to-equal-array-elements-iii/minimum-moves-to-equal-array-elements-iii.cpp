class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int n=nums.size(),m=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>m)m=nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i]<m)
            ans+=m-nums[i];
        }
        return ans;
    }
};