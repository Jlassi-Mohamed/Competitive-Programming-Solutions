// Code inspired by : Dr Mostafa Saad
// Created by jlassimohamed on 4/20/24.
//
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
using namespace std;

set<pii> visited;
queue<pii> q;
map<pii, bool> allowed;
ll xi, yi, xf, yf, n, r, a, b;
void bfs() {
    pii cur, newp;
    int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
    int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};
    q.emplace(xi, yi);
    visited.insert({xi, yi});
    int sz = 1;
    for(int dep=0; !q.empty(); dep++, sz=(int)q.size()) {
        while(sz--) {
            cur = q.front(), q.pop();
            loop(d, 0, 8) {
                int nx = dx[d] + cur.F;
                int ny = dy[d] + cur.S;
                newp = {nx, ny};
                if(nx==xf && ny==yf) {
                    cout << dep+1;
                    return ;
                }
                if(visited.find(newp) != visited.end() || !allowed[newp]) {
                    continue;
                }
                visited.insert(newp);
                q.emplace(newp);
            }
        }
    }
    cout << -1;
}
void solve() {
    cin >> xi >> yi >> xf >> yf >> n;
    loop(i, 0, n) {
        cin >> r >> a >> b;
        loop(j, a, b+1) {
            allowed[{r, j}] = true;
        }
    }
    bfs();
}
int main() {
    FAST;
    //cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
