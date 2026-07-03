// Last updated: 03/07/2026, 12:26:05
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid;
        while (start <= end) {
            mid = start + (end - start) / 2;

            if (target == nums[mid]) {
                return mid;
            }

            if (target < nums[mid]) {
                end = mid - 1;

            } else {
                start = mid + 1;
            }
        }
        return start;
    }
};