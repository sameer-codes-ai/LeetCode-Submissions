class Solution {
public:
    int calc(int d, int m){
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int ans=d;
        for(int i=0;i<m-1;i++)ans+=days[i];
        return ans;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int am1=stoi(arriveAlice.substr(0,2));
        int ad1=stoi(arriveAlice.substr(3,2));
        int a1=calc(ad1,am1);
        int am2=stoi(leaveAlice.substr(0,2));
        int ad2=stoi(leaveAlice.substr(3,2));
        int a2=calc(ad2,am2);

        int bm1=stoi(arriveBob.substr(0,2));
        int bd1=stoi(arriveBob.substr(3,2));
        int b1=calc(bd1,bm1);
        int bm2=stoi(leaveBob.substr(0,2));
        int bd2=stoi(leaveBob.substr(3,2));
        int b2=calc(bd2,bm2);

        int start=max(a1,b1), end=min(a2,b2);
        return max(0,end-start+1);        
    }
};