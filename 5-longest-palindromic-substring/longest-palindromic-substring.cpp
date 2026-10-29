class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int st=0, len=1;
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(r<n && l>=0 && s[l]==s[r]){
                if(r-l+1>len){
                    len=r-l+1;
                    st=l;
                }
                r++;
                l--;
            }

            l=i, r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>len){
                    len=r-l+1;
                    st=l;
                }
                r++;
                l--;
            }
        }

        return s.substr(st,len);
    }
};