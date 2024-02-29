    // Created by jlassimohamed on 2/27/24.
     
    #include <algorithm>
    #include <array>
    #include <bitset>
    #include <cassert>
    #include <chrono>
    #include <climits>
    #include <list>
    #include <cmath>
    #include <complex>
    #include <cstring>
    #include <functional>
    #include <iomanip>
    #include <iostream>
    #include <map>
    #include <numeric>
    #include <queue>
    #include <random>
    #include <set>
    #include <unordered_set>
    #include <vector>
    #include <cstring>
    #define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define GRAPH vector<vector<int>>
    #define loop(i,s,e) for(long long i=s ; i<e ; i++)
    #define bloop(i, e, s) for(int i=e-1; i>=s; i--)
    #define ll long long
    #define str string
    #define pii pair<int, int>
    #define pll pair<long long, long long>
    #define mp make_pair
    #define f first
    #define s second
    #define mapi map<int, int>
    #define mapll map<long long, long long>
    #define pb push_back
    #define pf push_front
    #define popb pop_back
    #define popf pop_front
    #define vi vector<int>
    #define vll vector<long long>
    #define li list<int>
    #define nl "\n"
    using namespace std;
    ll t, n;
     
    int main() {
        FAST;
        cin >> t;
        while (t--) {
            cin >> n;
            ll x, res = 0;
            bool check = false;
            loop(i, 0, n) {
                cin >> x;
                res += x;
                if(x%3 == 1)
                    check = true;
            }
            ll q = res%3; // 0 1 2
            if(!q)
                cout << 0 << nl;
            else if(q == 2 || (q == 1 && check))
                cout << 1 << nl;
            else
                cout << 2 << nl;
        }
        return 0;
    }
