//Atcoder
//https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
#define ll long long
long long i, j;
#define IO                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define en "\n"
#define array(a, n)            \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define f(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define take  \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;

void solve()
{
    ll sum = 0, ans = 0, k = 0, n, ct = 0, p = 0, q = 0, r, c,m;
    unordered_map<int, int> mp,up2;
    vector<int> v ,v3, v4, v5;
    unordered_set<int> st;
    cin>>n>>k;
    ll a[n];
    f(i, 0, n)
        cin >>a[i];
    vector<int>dp(n ,0);
    dp[0] = 0;
    for (int i = 1; i < n;i++)
    {
        ll maxi = INT_MAX;
        ct = 0;
        for (int j = i - 1; j >= 0 and ct<k;j--)
        {
            ll diff = abs(a[i] - a[j]) + dp[j];
            maxi = min(maxi, diff);
            ct++;
        }
        dp[i] = maxi;
    }
    cout<< dp[n - 1];
}

int main()
{

    IO
     solve();
     
    return 0;
}
