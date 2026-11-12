class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int c=1,d=1;
            for(int j=i;j<n-1;j++){
                if(nums[j]<=nums[j+1]){
                    break;
                }else c++;
            }
            for(int j=i;j<n-1;j++){
                if(nums[j]>=nums[j+1]){
                    break;
                }else d++;
            }
            ans=max({ans,c,d});
        }
        return ans;
    }
};