class Solution {
public:
    using pii =pair<int, int>;
    bool less(pii& x, pii& y){
        auto [a, b]=x;
        auto [c, d]=y;
        if (b-a==d-c) return a<c;
        return b-a<d-c;
    }

    vector<int> smallestRange(vector<vector<int>>& nums) {
        const int n=nums.size();
        vector<pii> A;
        for(int i=0; i<n; i++){
            for(int x: nums[i])
                A.emplace_back(x, i);
        }
        sort(A.begin(), A.end());
        int az=A.size(), cnt=0;
        vector<int> freq(n, 0);
        pii min_range={0, INT_MAX};
        for(int l=0, r=0; r<az; r++){
            int fR=++freq[A[r].second];
            if (fR==1) cnt++;
            while(cnt==n){
                pii range={A[l].first, A[r].first};
                if (less(range, min_range)) min_range=range;
                int fL=--freq[A[l].second];
                if (fL==0) cnt--;
                l++;
            }
        }
        return {min_range.first, min_range.second};
    }
};
