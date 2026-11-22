class Solution {
public:
    bool checkString(string s) {
        bool b=false;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(b && s[i]=='a')return false;

            if(s[i]=='b')b=true;
        }
        return true;
    }
};