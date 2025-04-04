class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 2) return 0; // Need at least 3 bars to trap water
        
        // Pre-compute max heights from left and right
        vector<int> max_left(n, 0);
        vector<int> max_right(n, 0);
        
        // Fill max_left array
        max_left[0] = height[0];
        for (int i = 1; i < n; i++) {
            max_left[i] = max(max_left[i-1], height[i]);
        }
        
        // Fill max_right array
        max_right[n-1] = height[n-1];
        for (int i = n-2; i >= 0; i--) {
            max_right[i] = max(max_right[i+1], height[i]);
        }
        
        // Calculate trapped water
        int total_water = 0;
        for (int i = 0; i < n; i++) {
            int water_at_i = min(max_left[i], max_right[i]) - height[i];
            if (water_at_i > 0) {
                total_water += water_at_i;
            }
        }
        
        return total_water;
    }
};