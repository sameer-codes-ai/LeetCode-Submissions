class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=nums[i];j>0;j/=10){
                sum+=j%10;
            }
            if(sum==i){
                ans=i;
                break;
            }
        }
        return ans;
    }
};