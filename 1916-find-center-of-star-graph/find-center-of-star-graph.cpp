class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=0;
        unordered_map<int, int> mp;
        for(auto i:edges){
            mp[i[0]]++;
            mp[i[1]]++;
        }
        int ans=0, x=0;
        for(auto i:mp){
            if(i.second>x){
                x=i.second;
                ans=i.first;
            }
        }
        return ans;

    }
};