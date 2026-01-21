class Solution {
public:
    bool isAnagram(string s, string t) {
        string ns = s;
        string nt = t;
        //
        sort(ns.begin(), ns.end());
        sort(nt.begin(), nt.end());

        return ns == nt;
    }
};
