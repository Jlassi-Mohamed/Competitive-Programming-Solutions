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

bool isPrime(ll& x) {
    if(x<2) return false;
    if(x==2) return true;
    lloop(i, 2, sqrt(x)+1) {
        if(x%i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    ll l, r;
    cin >> l >> r;
    lloop(i, l, r+1) {
        if(!isPrime(i)) {
            lloop(j, 2, i-1) {
                if(i%j==0) {
                    cout << abs(i-j) << " " << j << nl;
                    return;
                }
            }
        }
    }
    cout << -1 << nl;
}

int main() {
    //FAST;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
