class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int curr=mp[s[i]];
            if(i+1<n && curr<mp[s[i+1]]){
                ans-=curr;
            }else ans+=curr;
        }
        return ans;
    }
};