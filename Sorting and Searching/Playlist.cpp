#include <bits/stdc++.h>
using namespace std;

#define ft first
#define sd second
#define pb push_back
#define all(x) x.begin(),x.end()
#define fr(i,n) for (int i = 0; i < n; i++)
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

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = 0, max_len = 0, curr_len = 0;
    map<int, int> freq;
    while (j < n)
    {
        if (freq.find(arr[j]) == freq.end() || freq[arr[j]] == 0)
        {
            freq[arr[j]]++;
            curr_len++;
            max_len = max(max_len, curr_len);
            j++;
        }
        else
        {
            curr_len--;
            freq[arr[i]]--;
            i++;
        }
    }
    cout << max_len;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
    solve();
   return 0;
}
