class Solution {
public:
    vector<string> res;
    vector<char> abc = {'a', 'b', 'c'};
    void solve(string& s, int& n, int& k) {
        if(res.size() == k)
            return ;
        if(s.size()==n) {
            res.push_back(s);
            return;
        }
        for(int i=0; i<3; i++) {
            if(!s.size() || s.back()!=abc[i]) {
                s.push_back(abc[i]);
                solve(s, n, k);
                s.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        string s="";
        solve(s, n, k);
        return res.size()==k ? res.back() : "";
    }
};
