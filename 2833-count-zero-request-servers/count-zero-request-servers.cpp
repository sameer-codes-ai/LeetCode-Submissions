class Solution {
public:
    static bool check(vector<int>& a, vector<int>& b){
        return a[1]<b[1];
    }
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int q=queries.size(),ls=logs.size();
        sort(logs.begin(),logs.end(),check);
        vector<int> ans(q);
        vector<pair<int, int>> qr;
        for(int i=0;i<q;i++){
            qr.push_back({queries[i],i});
        }
        sort(qr.begin(),qr.end());
        vector<int> freq(n+1,0);
        int l=0,r=0,active=0;
        for(auto [t,id]:qr){
            while(r<ls && logs[r][1]<=t){
                int i=logs[r][0];
                if(freq[i]==0){
                    active++;
                }
                freq[i]++;
                r++;
            }

            while(l<r && logs[l][1]<t-x){
                int i=logs[l][0];
                freq[i]--;
                if(freq[i]==0){
                    active--;
                }
                l++;
            }
            ans[id]=n-active;
        }
        return ans;
    }
};