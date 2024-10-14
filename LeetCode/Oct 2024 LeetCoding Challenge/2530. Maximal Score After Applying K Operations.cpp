class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        long long res=0;
        for(int i=0; i<k; i++){
            int x=pq.top();
            res+=x;
            if (x==1){
                res+=(k-1-i);
                break;
            }
            pq.pop();
            pq.push((x+2)/3);
        }
        return res;
    }
};
