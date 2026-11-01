class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        // int ans=0;
        int n=nums.size();
        int realAns=INT_MAX;
        for(int i=0;i<=n-2;i+=2){
            string a1="";
            a1+=to_string(nums[i]);
            a1+=to_string(nums[i+1]);
            realAns=min(realAns,stoi(a1));
        }
        return realAns;
    }
};