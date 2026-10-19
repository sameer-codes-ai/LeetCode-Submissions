class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        long long s=0;
        vector<int> v(n+1,0);
        for(auto i:queries){
            v[i[0]]++;
            v[i[1]+1]--;
        }

        int c=0;
        for(int i=0;i<n;i++){
            c+=v[i];
            if(c<nums[i])return false;
        }
        return true;
    }
};