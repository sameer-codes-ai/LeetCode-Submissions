class Solution {
public: //sam
    long long removeZeros(long long n) {
        long long a=0, ans=0;
        for(long long i=n;i>0;i/=10){
            if(i%10 !=0)a=a*10+(i%10);
        }

        for(long long i=a;i>0;i/=10){
            ans=ans*10 + (i%10);
        }

        return ans;
    }
};