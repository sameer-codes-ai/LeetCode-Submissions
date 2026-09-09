class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        for(long long i=4,j=999;j<n;i+=3,j=j*1000+999){
            ans+=n-j;
        }
        return ans;
    }
};