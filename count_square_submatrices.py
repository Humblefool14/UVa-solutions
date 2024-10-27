class Solution(object):
    def countSquares(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: int
        """
        if not matrix or not matrix[0]:
            return 0
        
        m, n = len(matrix), len(matrix[0])
        # dp[i][j] represents the side length of the largest square 
        # ending at position (i,j)
        dp = [[0] * n for _ in range(m)]
        total = 0
        
        # Fill dp array and count squares
        for i in range(m):
            for j in range(n):
                if matrix[i][j] == 1:
                    # For cells in first row or first column
                    if i == 0 or j == 0:
                        dp[i][j] = 1
                    else:
                        # The minimum of the three adjacent squares + 1
                        dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1
                    total += dp[i][j]
        
        return total
        