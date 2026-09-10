class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char, int> mp;
        for(char i:s){
            mp[i]++;
        }
        // for(auto i:mp){
        //     cout<<i.second<<" ";
        // }
        // cout<<mp[letter];
        return (double(mp[letter])/s.size())*100;
    }
};