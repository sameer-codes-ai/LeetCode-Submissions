class Solution {
public:
    void calc(vector<int> &candidates, vector<int> &vec,vector<vector<int>> &ans, int index, int target)
    {
        if(target==0) 
        {
            ans.push_back(vec);
            return;
        }

        if(target<0 || index>=candidates.size())
        {
            return;
        }
        calc(candidates,vec,ans, index+1, target);
        vec.push_back(candidates[index]);
        calc(candidates,vec,ans, index, target-candidates[index]);
        vec.pop_back();
        
        //vec.push_back(candidates[index]);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //your code goes here
        vector<vector<int>> ans;
        vector<int> vec;
        calc(candidates, vec,ans,  0, target);
        return ans;
        
    }
};