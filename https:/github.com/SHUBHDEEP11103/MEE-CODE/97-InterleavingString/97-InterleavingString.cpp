// Last updated: 03/07/2026, 12:25:30
class Solution {
public:
    bool f(int i, int j, string s1, string s2, string s, vector<vector<int>>& dp){
        if((i+j)>=s.length())
            return true;
        if(dp[i][j]!=-1)
            return dp[i][j];
        bool f1=false, f2=false;
        if(i<s1.length() && s[i+j]==s1[i])
            f1 = f(i+1, j, s1, s2, s, dp);
        if(j<s2.length() && s[i+j]==s2[j])
            f2 = f(i, j+1, s1, s2, s, dp);
        return dp[i][j] = (f1 || f2);
    }
    bool isInterleave(string s1, string s2, string s) {
        if((s1.length()+s2.length())!=s.length())
            return false;
        vector<vector<int>> dp(s1.length()+1, vector<int>(s2.length()+1, -1));
       return f(0, 0, s1, s2, s, dp);
    }
};