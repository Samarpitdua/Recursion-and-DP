class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size() , m = text2.size();
        vector<vector<int>> dp(n + 1 , vector<int>(m + 1 , 0));
        for(int i = 0 ; i <= n ;i++)
        {
            for(int j = 0 ; j <= m ;j++)
            {
                if(i == 0 or j == 0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    if(text1[i - 1] == text2[j - 1])
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                    else
                        dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
                }
            }
        }
        int i = n , j = m;
        string ans = "";
        while(i > 0 and j > 0)
        {
            if(text1[i - 1] == text2[j - 1])
            {
                ans += text1[i - 1];
                i-- , j--;
            }
            else
            {
                if(dp[i - 1][j] > dp[i][j - 1])
                    i--;
                else
                    j--;
            }
        }
        reverse(ans.begin() , ans.end());
        cout<<ans<<"\n";
        
        return dp[n][m];
    }
};
