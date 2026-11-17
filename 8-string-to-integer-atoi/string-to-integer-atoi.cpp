class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        while(s[i]==' '){//i<n && (s[i]!='-' && s[i]!='+' && (s[i]<'0' && s[i]>'9'))){
            i++;
        }
        cout<<i;
        int sign=1;
        if(i<n && s[i]=='-'){
            sign=-1;
            i++;
        }else if(i<n && s[i]=='+'){
            sign=1;
            i++;
        }
        long long ans=0;
        for(;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                ans=ans*10+(s[i]-'0');
                if(sign==1 && ans>=INT_MAX){
                    return INT_MAX;
                }else if(sign==-1 && -ans<=INT_MIN){
                    return INT_MIN;
                }
                    
                // cout<<ans<<" ";
            }else break;
        }
        return ans*sign;
    }
};