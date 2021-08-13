#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <stack>
#include <iomanip>
using namespace std;

#define ft first
#define sd second
#define pb push_back
#define all(x) x.begin(),x.end()
#define ll long long int
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define plii pair<pair<ll, int>, int>
#define piii pair<pii, int>
#define viii vector<pair<pii, int>>
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define pll pair<ll,ll>
#define pli pair<ll,int>
#define mp make_pair
#define ms(x, v) memset(x, v, sizeof x)
const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
     #endif
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }

    sort(all(a));
    sort(all(b));
    int cnt = 0;
    int i = 0, j = 0;

    while(i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) {
            ++cnt;
            ++i;
            ++j;
        }
        else {
            if (a[i] - b[j] > k) {
                ++j;
            }
            else {
                ++i;
            }
        }
    }
    cout << cnt << endl;
   return 0;
}
