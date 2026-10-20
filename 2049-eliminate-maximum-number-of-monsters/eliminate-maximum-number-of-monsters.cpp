class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<double> r(n);
        for(int i=0;i<n;i++){
            r[i]=double(dist[i])/speed[i];
        }
        sort(r.begin(), r.end());
        int ans=0;
        for(int i=0;i<n;i++){
            // cout<<r[i]<<" ";
            if(double(i)<r[i])ans++;
            else break;
        }
        return ans;
    }
};