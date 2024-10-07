class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for(char& curr : s) {
            if(!st.empty()&& ((st.top()=='A' && curr=='B') || (st.top()=='C' && curr=='D'))) {
                st.pop();
            }
            else {
                st.push(curr);
            }
        } 
        return st.size();
    }
};
