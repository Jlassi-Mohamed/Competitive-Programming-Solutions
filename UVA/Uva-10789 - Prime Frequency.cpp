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
int testCase = 1;
bool isPrime(int& n) {
    if(n<2) return false;
    loop(i, 2, n) {
        if(n%i == 0)
            return false;
    }
    return true;
}
void solve() {
    str s; cin >> s;
    str res = "";
    sort(s.begin(), s.end());
    int cnt = 1;
    loop(i, 1, s.size()) {
        if(s[i] == s[i-1]) {
            cnt++;
        }
        if(s[i]!=s[i-1] || i == s.size()-1){
            if(isPrime(cnt)) {
                res+=s[i-1];
            }
            cnt = 1;
        }
    }
    cout << "Case "<<testCase << ": ";
    res.empty() ? cout << "empty" << nl : cout << res<< nl;
    testCase++;
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