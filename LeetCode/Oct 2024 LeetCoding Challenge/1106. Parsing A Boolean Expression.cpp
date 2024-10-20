class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> st;
        for(char& exp : expression) {
            if(exp == '(' || exp==',') continue;
            if(exp == ')') {
                bool existTrue = false, existFalse = false;
                while(st.top() == 't' || st.top() == 'f') {
                    char c = st.top();
                    st.pop();
                    if(c=='t') existTrue = true;
                    else existFalse = true;
                }
                char op = st.top(); st.pop();
                if(op=='!') st.push(existTrue ? 'f' : 't');
                else if(op=='&') st.push(existFalse ? 'f' : 't');
                else st.push(existTrue ? 't' : 'f');
            }
            else {
                st.push(exp);
            }
        }
        return st.top() == 't';
    }
};
