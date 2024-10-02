class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<pair<int, int>> v(arr.size());
        for(int i=0; int& e : arr) {
            v[i] = {e, i};
            i++;
        } 
        sort(v.begin(), v.end());
        int prev = INT_MIN, cur=0;
        for(auto& e : v) {
            if(e.first>prev) cur++;
            arr[e.second] = cur;
            prev=e.first;
        } 
        return arr;

    }
};
