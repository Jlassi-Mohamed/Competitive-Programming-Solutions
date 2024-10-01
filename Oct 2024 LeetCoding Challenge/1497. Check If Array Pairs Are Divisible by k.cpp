class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> f(k, 0);
        for(int& e : arr) {
            int r = (e%k + k)%k;
            f[r]++;
        }
        if(f[0]%2)
            return false;
        for(int i=1; i<=k/2; i++) {
            if(f[i] != f[k-i])
                return false;
        }
        return true;
    }
};