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
bool prime(ll& n) {
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

void solve() {
    ll d;
    cin >> d;
    ll a = 0, b = 0, step = 1;
    while(true) {
        for (ll i = step + d;; i++) {
            if (prime(i)) {
                if (!a) {
                    a = i;
                    step = i;
                    break;
                } else {
                    b = i;
                    break;
                }
            }

        }
        if (b) break;
    }
    cout << a*b << nl;

}

int main() {
    FAST;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}