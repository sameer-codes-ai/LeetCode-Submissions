class Solution {
public:
    string findLatestTime(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                if(i==0){
                    if(s[1]>='0' && s[1]<='9' && s[1]>='2')ans+='0';
                    else if(s[1]>='0' && s[1]<='9') ans+='1';
                    else ans+='1';
                }
                else if(i==1){
                    if(ans[i-1]=='1')ans+='1';
                    else if(ans[i-1]=='0')ans+='9';
                }
                else if(i==3)ans+='5';
                else if(i==4)ans+='9';
            }
            else ans+=s[i];
        }
        cout<<"hardcode";
        return ans;
    }
};