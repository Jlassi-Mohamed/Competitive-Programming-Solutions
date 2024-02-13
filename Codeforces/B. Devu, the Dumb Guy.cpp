//
// Created by jlassimohamed on 1/19/24.
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
ll x, n;
vector<pll> subjects;
bool sortFunc(pll& m1, pll& m2)
{
    return m1.second < m2.second;
}
int main() {
    FAST;
    cin >> n >> x;
    loop(i, 0, n)
    {
        int c;
        cin >> c;
        subjects.pb({i, c});
    }
    sort(subjects.begin(), subjects.end(), sortFunc);
    ll sum = 0;
    for(auto& e : subjects)
    {
        //cout << e.first << " | " << e.second << nl;
        sum += x * e.second;
        if(x>1)
            x--;
    }
    cout << sum;
    return 0;
}