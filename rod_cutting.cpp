/**
 * Solves the rod cutting problem using dynamic programming
 * @param prices Array containing prices for different rod lengths
 * @param n Length of the rod
 * @return Maximum profit obtainable
 */
 int cutRod(vector<int>& prices, int n) {
    // Create a 2D vector T[n+1][n+1] for dynamic programming
    // Initialize all values to 0
    vector<vector<int>> T(n+1, vector<int>(n+1, 0));
    
    // Fill the table in bottom-up manner
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Get the value for current cut length
            int val = prices[i-1];
            
            // Apply the dynamic programming formula
            if (j >= i) {
                T[i][j] = max(T[i-1][j], val + T[i][j-i]);
            } else {
                T[i][j] = T[i-1][j]; // take the previous value from row
            }
        }
    }
    
    // The answer is stored in the bottom-right cell
    return T[n][n];
}

// Note: No need for a separate max function as the STL provides std::max