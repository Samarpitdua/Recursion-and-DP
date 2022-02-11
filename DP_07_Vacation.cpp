//https://atcoder.jp/contests/dp/tasks/dp_c
// Problem Statement
// Taro's summer vacation starts tomorrow, and he has decided to make plans for it now.

// The vacation consists of N days. For each i (1≤i≤N), Taro will choose one of the following activities and do it on the i-th day:

// A: Swim in the sea. Gain a 
// i
// ​
//   points of happiness.
// B: Catch bugs in the mountains. Gain b 
// i
// ​
//   points of happiness.
// C: Do homework at home. Gain c 
// i
// ​
//   points of happiness.
// As Taro gets bored easily, he cannot do the same activities for two or more consecutive days.

// Find the maximum possible total points of happiness that Taro gains.
#include <bits/stdc++.h>
#define ll long long
long long i, j;
#define en "\n"
using namespace std;
#define MOD 1000000007
typedef pair<int, int> pi;

void solve()
{
    ll sum = 0, ans = 0, k = 0, n, ct = 0, p = 0, q = 0 ;
    cin>>n;
    ll mat[n][3];
    vector<vector<ll>> dp(n, vector<ll>(3, 0));
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            cin >> mat[i][j];
        }
    }
    if (n == 1)
    {
        for (int i = 0; i < 3; i++)
        {
            ans = max(ans, mat[0][i]);
        }
        cout << ans;
        return;
    }
    for (int i = 0; i < 3;i++)
    {
        dp[n - 1][i] = mat[n - 1][i];
    }
    for (int i = n - 2; i >= 0;i--)
    {
        for (int j = 0;j<3;j++)
        {
            ll ans=INT_MIN;
            for (int k = 0; k < 3;k++)
            {
                if(j!=k)
                {
                    ans = max(ans, dp[i + 1][k]);
                }
            }
            dp[i][j] = mat[i][j] + ans;
        }
    }
    
    for (int i = 0; i < 3;i++)
    {
        ans = max(ans, dp[0][i]);
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
