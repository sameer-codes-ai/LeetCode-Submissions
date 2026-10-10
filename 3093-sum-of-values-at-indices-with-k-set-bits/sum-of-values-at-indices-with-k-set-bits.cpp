class Solution {
public:
    bool check(int i, int k){
        while(i>0){
            int t=i%2;
            if(t==1)k--;
            i/=2;
        }
        return k==0;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(check(i,k)){
                cout<<i<<" ";
                ans+=nums[i];
            }
        }
        return ans;
    }
};