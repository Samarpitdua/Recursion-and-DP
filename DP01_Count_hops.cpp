// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#define MOD 1000000007
class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        vector<long long > dp(n + 1 , 0);
        dp[0] = 1 , dp[1] = 1 , dp[2] = 2;
        for(int i = 3 ; i <= n ;i++)
        {
            dp[i] = (dp[i - 1]%MOD + dp[i - 2]%MOD + dp[i - 3]%MOD)%MOD;
        }
        return dp[n]%MOD;
        // your code here
        
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends
