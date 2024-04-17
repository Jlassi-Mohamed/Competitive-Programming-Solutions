    //
    // Created by jlassimohamed on 4/15/24.
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
    #define loop(i, s, e) for(long long i=s ; i<e ; i++)
    #define bloop(i, e, s) for(int i=e-1; i>=s; i--)
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
    #define pf push_front
    #define popb pop_back
    #define popf pop_front
    #define vi vector<int>
    #define vll vector<long long>
    #define li list<int>
    #define nl "\n"
    using namespace std;
    const ll MAX = numeric_limits<long long>::max();
    const ll MIN = numeric_limits<long long>::min();
    ll t;
    int d, sumTime, minTime, maxTime, sumMin = 0, sumMax = 0, x=0;
    using namespace std;
     
    void solve() {
        cin >> d >> sumTime;
        vector<pii> vect(d);
        vi res(d);
        loop(i,0, d) {
            cin >> minTime >> maxTime;
            vect[i] = {minTime, maxTime};
            res[i] = minTime;
            sumMin += minTime;
            sumMax += maxTime;
        }
        if(sumTime > sumMax || sumTime < sumMin)
            cout << "NO";
        else {
            cout << "YES" << nl;
            x = sumTime - sumMin;
            int i = 0;
            while(x>0) {
                int diff = vect[i].S - vect[i].F;
                if(x>diff) {
                    res[i]+=diff;
                    x-=diff;
                }
                else {
                    res[i] += x;
                    x = 0;
                }
                i = (i+1)%d;
            }
            for(int& e : res) {
                cout << e << " ";
            }
        }
    }
     
    int main() {
        FAST;
        t = 1;
        //cin >> t;
        while (t--) {
            solve();
        }
        return 0;
    }
