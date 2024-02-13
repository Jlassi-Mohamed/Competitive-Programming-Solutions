// Jlassi
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
ll n, m, k, curBon = 1;
vector<pii> swap;
int main() {
    FAST;
    cin >> n >> m >> k;
    vector<bool> checkHole(n+1, false);
    loop(i, 0, m)
    {
        int h;
        cin >> h;
        if(h == 1)
        {
            cout << 1;
            return 0;
        }
        checkHole[h] = true;
    }
    //
    bool check = true;
    loop(i, 0, k)
    {
        int u, v;
        cin >> u >> v;
        if(check) {
            if (u == curBon)
                curBon = v;
            else if (v == curBon)
                curBon = u;
            if(checkHole[curBon])
                check = false;
        }
    }
    cout << curBon;
    return 0;
}