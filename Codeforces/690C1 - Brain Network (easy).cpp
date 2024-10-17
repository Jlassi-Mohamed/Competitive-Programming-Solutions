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
    void solve() {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> nodes(n+1);
        vector<bool> vis(n+1, false);
        loop(i, 0, m) {
            int x, y;
            cin >> x >> y;
            nodes[x].pb(y);
            nodes[y].pb(x);
        }
        int cnt = 0;
        vis[1] = true;
        queue<int> q;
        q.push(1);
     
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            cnt++;
            for(int& e : nodes[curr]) {
                if(!vis[e]) {
                    vis[e] = true;
                    q.push(e);
                }
            }
        }
        (cnt==n && m==n-1) ? cout << "yes" : cout << "no";
        cout << nl;
    }
     
    int main() {
        FAST;
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
        //cin >> t;
        t = 1;
        while(t--) {
            solve();
        }
        return 0;
    }
