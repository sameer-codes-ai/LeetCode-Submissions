class Solution {
public:
    int dsum(string s){
        int sm=0;
        for(int i=0;i<s.size();i++){
            sm+=s[i]-'0';
        }
        return sm;
    }
    string digitSum(string s, int k) {
        while(s.size()>k){
            int sm=0;
            string ss="";
            for(int i=0;i<s.size();i+=k){
                string s1=s.substr(i,k);
                sm=dsum(s1);
                ss+=to_string(sm);
            }
            s=ss;
        }
        return s;
    }
};