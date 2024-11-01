class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        res += s[0];
        int cnt = 1;
        for(int i=1; i<s.size(); i++) {
            if(s[i] != s[i-1]) {
                cnt = 1;
                res += s[i];
            }
            if(s[i] == s[i-1]) {
                cnt++;
                if(cnt >= 3) continue;
                res += s[i];
            }

        }
        return res;
    }
};
