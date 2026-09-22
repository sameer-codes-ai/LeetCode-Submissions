class Solution {
public:
    string rev(string s){
        string ans="";
        for(char i:s){
            ans=i+ans;
        }
        return ans;
    }
    string processStr(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(c>='a' && c<='z')ans+=c;
            else if(c=='*')ans=ans.substr(0,ans.size()-1);
            else if(c=='#')ans+=ans;
            else if(c=='%')ans=rev(ans);
        }
        return ans;
    }
};