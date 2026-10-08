class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int d=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='(')d++;
            if(d>=2)ans+=s[i];
            if(s[i]==')')d--;
            
            
        }
        return ans;
    }
};