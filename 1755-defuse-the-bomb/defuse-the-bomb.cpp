class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        int n=code.size();
        for(int i=0;i<n;i++){
            int s=0;
            if(k<0){
                int j=(i>=1)?i-1:n-1;
                for(int c=1;c<=abs(k);c++){
                    s+=code[j];
                    j--;
                    if(j<0)j=n-1;
                }
            }else if(k==0)s=0;
            else{
                int j=(i<n-1)?i+1:0;
                for(int c=1;c<=abs(k);c++){
                    s+=code[j];
                    j++;
                    if(j>=n)j=0;
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};