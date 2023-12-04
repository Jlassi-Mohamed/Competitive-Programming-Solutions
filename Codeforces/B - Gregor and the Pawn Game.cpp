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
ll t, n, res;
str enemy, gregor;
 
void solve() {
     cin >> n >> enemy >> gregor; 
        res = 0;
        loop(i, 0, n){
            if(gregor[i] == '0'){continue;}
 
            if(i && enemy[i - 1] == '1'){enemy[i - 1] = 'z';res++;}
            else if(enemy[i] == '0'){enemy[i] = 'z'; res++;}
            else if(i + 1 < n && enemy[i + 1] == '1'){enemy[i + 1] = 'z'; res++;}
        }
        cout << res << nl;
}
int main() {
    FAST;
    cin >> t;
    while(t--) {
        solve(); // 1st time trying this method
    }
 
    return 0;
}