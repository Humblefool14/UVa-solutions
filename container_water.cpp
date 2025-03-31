class Solution {
    public:
        int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0;
        int right = height.size() - 1;
        
        // Information about the maximum container
        // Use two-pointer approach for O(n) time complexity
        while (left < right) {
            maxWater = max(maxWater, (right-left)*min(height[left], height[right]));
            // Move the pointer pointing to the shorter line inward
            // This is because moving the taller line would either decrease
            // or keep the same limiting height, but always decrease width
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxWater;
     };
    };