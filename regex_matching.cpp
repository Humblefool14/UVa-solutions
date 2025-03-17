class Solution {
    public:
        bool isMatch(string s, string p) {
            int m = s.length();
            int n = p.length();
            
            // Create a 2D DP table where dp[i][j] represents if s[0...i-1] matches p[0...j-1]
            vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
            
            // Empty pattern matches empty string
            dp[0][0] = true;
            
            // Handle patterns like a*, a*b*, etc. matching empty string
            for (int j = 1; j <= n; j++) {
                if (p[j - 1] == '*') {
                    dp[0][j] = dp[0][j - 2]; // '*' can match zero of the preceding element
                }
            }
            
            // Fill the DP table
            for (int i = 1; i <= m; i++) {
                for (int j = 1; j <= n; j++) {
                    if (p[j - 1] == '.' || p[j - 1] == s[i - 1]) {
                        // If current characters match or pattern has '.', inherit result from previous characters
                        dp[i][j] = dp[i - 1][j - 1];
                    } else if (p[j - 1] == '*') {
                        // '*' can match zero of the preceding element
                        dp[i][j] = dp[i][j - 2];
                        
                        // Or '*' matches one or more of the preceding element,
                        // if the preceding character matches current character in s or is '.'
                        if (p[j - 2] == '.' || p[j - 2] == s[i - 1]) {
                            dp[i][j] = dp[i][j] || dp[i - 1][j];
                        }
                    }
                    // Otherwise, characters don't match, dp[i][j] remains false
                }
            }
            
            return dp[m][n];
        };
    
    }; 