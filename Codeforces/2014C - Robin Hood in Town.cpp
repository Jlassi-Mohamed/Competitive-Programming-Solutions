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
        int n; cin >> n;
        ll res=0;
        vll vect(n, 0);
     
        for(int i=0; i<n; i++) {
            cin >> vect[i];
            res+=vect[i]*1LL;
        }
        if(n<=2)
        {
            cout << "-1" << nl;
            return;
        }
     
        sort(vect.begin(), vect.end());
        double avgsur2 = ((double)res/n)/2;
        if(vect[n/2]<avgsur2) {
            cout << "0" << nl;
            return;
        }
        unsigned long long x = 1LL*n*2*vect[n/2]-res+1;
        cout << x << nl;
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
