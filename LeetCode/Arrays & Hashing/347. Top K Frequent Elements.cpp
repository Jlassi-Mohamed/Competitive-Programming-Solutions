class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int num : nums) {
            mp[num]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto& e : mp) {
            pq.push({e.second, e.first});
        }
        vector<int> res;
        while(k--) {
            auto p = pq.top().second;
            res.push_back(p);
            pq.pop();
        }
        return res;
    }
};
