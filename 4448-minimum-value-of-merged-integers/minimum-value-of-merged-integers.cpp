class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        // int ans=0;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<=n-2;i+=2){
            string a1="";
            a1+=to_string(nums[i]);
            a1+=to_string(nums[i+1]);
            ans.push_back(stoi(a1));
        }
        int realAns=INT_MAX;
        for(int i:ans){
            if(i<realAns){
                realAns=i;
            }
        }
        return realAns;
    }
};