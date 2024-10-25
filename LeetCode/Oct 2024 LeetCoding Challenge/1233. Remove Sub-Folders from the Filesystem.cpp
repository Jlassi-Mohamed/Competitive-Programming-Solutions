class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        const int n=folder.size();
        sort(folder.begin(), folder.end());
        vector<string> res={folder[0]};
        string prev=folder[0];
        for(int i=1; i<n; i++){
            string s=folder[i];
            if (s.find(prev+'/')!=0){
                res.push_back(s);
                prev=s;
            }
        }
        return res;
    }
};
