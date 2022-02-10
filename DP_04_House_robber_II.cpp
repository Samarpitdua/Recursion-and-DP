class Solution {
public:
    int solve(vector<int>& nums , int n) {
        int a = nums[0] ; 
        if(n <= 0)
            return nums[0];
        if(n == 1)
            return a;
        int b = max(nums[0] , nums[1]) , c = b;
        for(int i = 2 ; i < n ;i++)
        {
            c = max(b , a + nums[i]);
            a = b;
            b = c;
        }
        return c;
            
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        int ans1 = solve(nums , n - 1);
        nums.erase(nums.begin());
        int ans2 = solve(nums , nums.size());
        return max(ans1 , ans2);
    }
};
