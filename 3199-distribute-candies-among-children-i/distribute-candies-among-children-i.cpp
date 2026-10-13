class Solution {
public:
    int distributeCandies(int n, int limit) {
        int ans=0;
        for(int a=0; a<=min(n,limit);a++){
            for(int b=0;b<=min(n-a,limit);b++){
                int c=n-a-b;
                if(c>=0 && c<=limit){
                    ans++;
                }
            }
        }
        return ans;
    }
};