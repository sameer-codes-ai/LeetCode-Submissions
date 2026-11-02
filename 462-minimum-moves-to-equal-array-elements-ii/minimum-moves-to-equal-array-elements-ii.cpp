class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        nth_element(begin(nums),begin(nums)+n/2,end(nums));
        int m=nums[n/2];
        for(int i=0;i<n;i++){
            ans+=abs(nums[i]-m);
        }
        return ans;
    }
};