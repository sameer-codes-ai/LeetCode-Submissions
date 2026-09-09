class Solution {
public:
    int countCommas(int n) {
        int len=log10(n)+1, ans=0;
        if(len<4)return 0;
        for(int i=1000;i<=n;i++){
            len=log10(i)+1;
            ans+=(len-1)/3.0;
        }
        return ans;
    }
};