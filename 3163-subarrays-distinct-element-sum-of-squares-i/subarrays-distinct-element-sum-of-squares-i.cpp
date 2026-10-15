class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            unordered_map<int, int> mp;
            int x=0;
            for(int k=i;k<n;k++){
                if(mp.count(nums[k])==0){
                    x++;
                }
                mp[nums[k]]++;
                ans+=x*x;
            }            
        }
        return ans;
    }
};