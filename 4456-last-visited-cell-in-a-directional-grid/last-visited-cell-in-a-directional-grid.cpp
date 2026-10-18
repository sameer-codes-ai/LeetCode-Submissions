class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size();
        // vis[0][0]=true;
        int i=0,j=0, r=0, c=0;
        while(i<n && j<m && i>=0 && j>=0){
            if(grid[i][j]=='0'){
                return {r,c};
            }
            r=i,c=j;
            // if()
            if(grid[i][j]=='L'){
                j=j-1;
            }else if(grid[i][j]=='R'){
                j=j+1;
            }else if(grid[i][j]=='U'){
                i=i-1;
            }else{
                i=i+1;
            }
            
            grid[r][c]='0';
        }
        return {r,c};
    }
};