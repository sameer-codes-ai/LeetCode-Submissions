class Solution{
private:
    bool valid(int i, int j, int n, int m){
        return i<n && j<m &&i>=0 && j>=0;
    }   
    void bfs(int i, int j, vector<vector<bool>>& v,vector<vector<char>> &grid){
        
        int n=grid.size(), m=grid[0].size();
        queue<pair<int,int>> q;
        v[i][j]=true;

        q.push({i,j});

        while(!q.empty()){
            pair<int, int> bl=q.front();
            q.pop();

            int r=bl.first, c=bl.second;

            int dr[] = {-1, 1, 0, 0};
            int dc[] = {0, 0, -1, 1};

            for(int k=0;k<4;k++){
                int rr = r + dr[k];
                int cc = c + dc[k];

                if(valid(rr,cc,n,m) && !v[rr][cc] && grid[rr][cc]=='1'){
                    v[rr][cc] = true;
                    q.push({rr,cc});
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>> &grid){
        int n=grid.size(), m=grid[0].size();
        vector<vector<bool>> v(n,vector<bool>(m,false));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !v[i][j]){
                    ans++;
                    bfs(i,j,v,grid);
                }
            }
        }
        return ans;
    }
};