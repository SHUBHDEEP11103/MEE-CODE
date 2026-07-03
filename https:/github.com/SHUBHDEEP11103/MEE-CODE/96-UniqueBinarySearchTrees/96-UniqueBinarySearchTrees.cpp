// Last updated: 03/07/2026, 12:25:31
class Solution {
public:
    // Dp Solution
    int solve(int n,vector<int>&dp){
        // base case
        if(n <= 1){
            return 1;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        int ans = 0;
        for(int i = 1;i<=n;i++){
            ans += solve(i-1,dp)*solve(n-i,dp);
        }

        return dp[n] = ans;
    }
    int numTrees(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
    /*
    // Recursive approach
    int numTrees(int n) {
        //base case if n is 1 or less than one then ans is 1
        if(n <= 1){
            return 1;
        }
        int ans = 0;
        // now consider all i as root which are
        for(int i = 1;i<=n;i++){
            // 1,2,3,4,5,...i.....n
            // then if i is root then i-1 will be left and n-i will be right
            // and the number of totak bsts is f(i-1)*f(n-i)
            ans += numTrees(i-1)*numTrees(n-i);
        }
        return ans;
    }
    */
};