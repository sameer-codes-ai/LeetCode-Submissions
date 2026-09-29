class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> mp;
        int n=grid.size(), m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[grid[i][j]]++;
            }
        }
        int rep=-1,miss=-1;
        for(int i=1;i<=n*n;i++){
            if(mp[i]==2)rep=i;
            if(mp[i]==0)miss=i;
        }
        return {rep,miss};
    }
};