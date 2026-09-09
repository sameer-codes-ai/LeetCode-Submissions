class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        int len=log10(n)+1;
        for(long long i=4,j=999;j<n;i+=3,j=j*1000+999){
            ans+=n-j;
        }
        return ans;
    }
};