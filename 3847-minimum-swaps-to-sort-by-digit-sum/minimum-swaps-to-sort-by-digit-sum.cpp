class Solution {
public:
    int dsum(int n){
        int ans=0;
        while(n>0){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int minSwaps(vector<int>& nums) {
        int ans=0, n=nums.size();
        vector<pair<pair<int,int>,int>> a;
        for(int i=0;i<n;i++){
            a.push_back({{dsum(nums[i]),nums[i]},i});
        }
        sort(a.begin(), a.end());
        
        // for(auto i:a){
        //     cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<"\n";
        // }
        
        vector<bool> v(n,false);
        for(int i=0;i<n;i++){
            if(!(v[i]|| a[i].second==i)){
                int j=i,c=0;
                while(!v[j]){
                    v[j]=true;
                    j=a[j].second;
                    c++;
                }
                ans+=c-1;
            }
        }

        return ans;
    }
};