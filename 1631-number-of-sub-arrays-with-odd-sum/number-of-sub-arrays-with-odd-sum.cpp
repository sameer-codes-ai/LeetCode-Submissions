class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const long long MOD=1e9+7;
        long long ans=0;
        int n=arr.size();
        int ec=1, oc=0;
        int s=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
            if(s%2==0){
                ans+=oc;
                ec++;
            }else{
                ans+=ec;
                oc++;
            }
            ans%=MOD;
        }
        return ans;
    }
};