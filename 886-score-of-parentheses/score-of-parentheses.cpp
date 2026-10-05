class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int> v;
        v.push_back(0);

        for(char ch : s) {
            if(ch == '(') {
                v.push_back(0);
            }
            else {
                int x = v.back();
                v.pop_back();

                if(x == 0)
                    x = 1;
                else
                    x *= 2;

                v.back() += x;
            }
        }

        return v[0];
    }
};