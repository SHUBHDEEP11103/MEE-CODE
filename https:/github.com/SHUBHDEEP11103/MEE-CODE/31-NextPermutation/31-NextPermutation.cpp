// Last updated: 03/07/2026, 12:26:06
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;

        // Step 1: find breakpoint
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // Step 2: if no breakpoint
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: swap with just greater element
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 4: reverse suffix
        reverse(nums.begin() + ind + 1, nums.end());
    }
};