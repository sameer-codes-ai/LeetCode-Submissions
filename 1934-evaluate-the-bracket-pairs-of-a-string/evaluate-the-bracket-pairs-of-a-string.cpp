class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for(vector<string> i:knowledge){
            mp[i[0]]=i[1];
        }
        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        string ans="";
        for(int i=0;i<s.size();i++){
            string s1="";
            if(s[i]=='('){
                i++;
                while(s[i]!=')'){
                    s1+=s[i];
                    i++;
                }
                // cout<<s1<<" ";
                if(mp[s1]!="")ans+=mp[s1];
                else ans+='?';
                s1="";
            }else ans+=s[i];
        }
        return ans;
    }
};