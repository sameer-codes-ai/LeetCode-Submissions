class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        int n=matrix[0].size(), m=matrix.size();
        for(int i=0;i<n;i++){
            vector<int> t;
            for(int j=0;j<m;j++){
                // if(j<m && i<n)
                t.push_back(matrix[j][i]);
            }
            ans.push_back(t);
        }
        return ans;
    }
};