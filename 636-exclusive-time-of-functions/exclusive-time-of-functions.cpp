class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n,0);
        stack<int> st;
        int pt=0;
        for(int i=0;i<logs.size();i++){
            vector<string> v;
            stringstream ss(logs[i]);
            string token;
            while(getline(ss,token,':')){
                v.push_back(token);
            }

            int id=stoi(v[0]), time=stoi(v[2]);
            if(v[1]=="start"){
                if(!st.empty()){
                    ans[st.top()]+=time-pt;
                }
                st.push(id);
                pt=time;
            }else{
                ans[st.top()]+=time-pt+1;
                st.pop();
                pt=time+1;
            }
        }
        return ans;
    }
};