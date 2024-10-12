#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define GRAPH vector<vector<int>>
#define loop(i, s, e) for(int i=s ; i<e ; i++)
#define lloop(i, s, e) for(long long i=s ; i<e ; i++)
#define bloop(i, e, s) for(int i=e-1; i>=s; i--)
#define blloop(i, e, s) for(long long i=e-1; i>=s; i--)
#define ll long long
#define str string
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mp make_pair
#define F first
#define S second
#define mapi map<int, int>
#define mapll map<long long, long long>
#define pb push_back
#define eb emplace_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define vi vector<int>
#define vll vector<long long>
#define li list<int>
#define nl "\n"
using namespace std;
const int MAX = numeric_limits<int>::max();
const int MIN = numeric_limits<int>::min();
ll t;

int cycleLen(int n) {
    int res = 1;
    while(n > 1) {
        n = (n & 1) ? 3 * n + 1 : n / 2;
        res++;
    }
    return res;
}

void solve() {
    int i, j;
    while(scanf("%d %d", &i, &j) == 2) {
        int res = 0;
        int mx = max(i, j);
        int mn = min(i, j);
        for(int p = mn; p <= mx; p++) {
            int x = cycleLen(p);
            if(x>=res)
                res = x;
        }
        cout << i << " " << j << " " << res << nl;
    }
}

int main() {
    FAST;
    t = 1;
    while(t--) {
        solve();
    }
    return 0;
}
