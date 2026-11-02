class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int m=INT_MAX;
        for(int i:nums){
            m=min(m,i);
        }
        for(int i:nums){
            ans+=(i-m);
        }
        return ans;
    }
};