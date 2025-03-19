class Solution {
    public:
        bool isMatch(string s, string p) {
            int m = s.length();
            int n = p.length();
            
            // Create a 2D DP table where dp[i][j] represents if s[0...i-1] matches p[0...j-1]
            vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
            
            // Empty pattern matches empty string
            dp[0][0] = true;
            
            // Handle patterns like "*", "*****", etc.
            for (int j = 1; j <= n; j++) {
                if (p[j - 1] == '*') {
                    dp[0][j] = dp[0][j - 1];
                }
            }
            
            for (int i = 1; i <= m; i++) {
                for (int j = 1; j <= n; j++) {
                    if (p[j - 1] == '*') {
                        // '*' can match empty sequence (dp[i][j-1]) or
                        // '*' can match one or more characters (dp[i-1][j])
                        dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
                    } else if (p[j - 1] == '?' || p[j - 1] == s[i - 1]) {
                        // '?' matches any single character or characters match exactly
                        dp[i][j] = dp[i - 1][j - 1];
                    }
                    // Otherwise, characters don't match, dp[i][j] remains false
                }
            }
            
            return dp[m][n];
        }
    };