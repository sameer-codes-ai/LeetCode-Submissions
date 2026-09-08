class Solution {
public:
    //Sameer Kumar
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(int i:arr)mp[i]++;
        int c=0;
        for(int i=1;;i++){
            if(!mp[i])c++;

            if(c==k)return i;
        }
        
    }
};