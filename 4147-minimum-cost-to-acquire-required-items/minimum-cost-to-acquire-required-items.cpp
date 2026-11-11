class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans=0;
        if(cost1+cost2<costBoth){
            return (1LL*need1*cost1)+(1LL*need2*cost2);
        }

        int min2=min(need1,need2);
        ans=1LL*costBoth*min2;
        need1-=min2;
        need2-=min2;

        if(need1>0){
            ans+=1LL*need1*min(cost1,costBoth);
        }else if(need2>0){
            ans+=1LL*need2*min(costBoth,cost2);
        }
        return ans;
    }
};