class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int cnt = 1;
        char prev = word[0];
        for(int i=1;i<(int)word.size();i++){
            if(word[i] == prev && cnt < 9)cnt++;
            else{
                comp.push_back(cnt+'0');
                comp.push_back(prev);
                prev = word[i];
                cnt = 1;
            }
        }
        comp.push_back(cnt+'0');
        comp.push_back(prev);
        return comp;
    }
};
