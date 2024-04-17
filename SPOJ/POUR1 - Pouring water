// Code inspired by Moaz Mohamed
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
#define loop(i, s, e) for(int i=s ; i<e ; i++)
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
#define eb emplace_back
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
int t;
queue<pii>Q;
set<pii> visited;
using namespace std;

void markVisited(int a, int b) {
    if(visited.find({a,b})==visited.end()) {
        visited.insert({a, b});
        Q.emplace(a, b);
    }
}

void solve() {
    int res = 0;
    visited.clear();
    Q={};
    int a, b, c;
    cin >> a >> b >> c;
     if(c>a && c>b)
     {
         cout << -1 << nl;
         return ;
     }
     Q.emplace(0, 0);
     visited.insert({0, 0});
     while(!Q.empty()) {
         int sz = (int)Q.size();
         while(sz--) {
            pii cur = Q.front();
            Q.pop();
            if(cur.F==c || cur.S==c) {
                cout << res << nl;
                return ;
            }
            markVisited(a,cur.S); // filling a
            markVisited(cur.F,b); // filling b
            markVisited(0,cur.S); // emptying a
            markVisited(cur.F,0); // emptying b
            // a -> b
            cur.F > b-cur.S ? markVisited(cur.F-(b-cur.S), b) : markVisited(0, cur.S+cur.F);
            // b -> a
             cur.S > a-cur.F ? markVisited(a, cur.S-(a-cur.F)) : markVisited(cur.S+cur.F, 0);
         }
         res++;
     }
     cout << -1 << nl;
}
int main() {
    FAST;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
