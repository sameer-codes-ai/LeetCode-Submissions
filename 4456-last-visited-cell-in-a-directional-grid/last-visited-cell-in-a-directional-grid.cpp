class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        vector<int> ans;
        ans={0,0};
        vis[0][0]=true;
        for(int i=0;i<n;i=i){
            for(int j=0;j<m;j=j){
                vis[i][j]=true;
                int r=-1,c=-1;
                if(grid[i][j]=='L'){
                    c=(j>=1)?j-1:-1;
                    r=i;
                }else if(grid[i][j]=='R'){
                    c=(j<m-1)?j+1:-1;
                    r=i;
                }else if(grid[i][j]=='U'){
                    r=(i>=1)?i-1:-1;
                    c=j;
                }else{
                    r=(i<n-1)?i+1:-1;
                    c=j;
                }
                if(r!=-1 && c!=-1 && !vis[r][c]){
                    ans={r,c};
                    i=r;
                    j=c;
                    // cout<<ans[0]<<" "<<ans[1]<<"\n";
                }else{
                    j=m+1;
                    i=n+1;
                }
            }
        }
        return ans;
    }
};