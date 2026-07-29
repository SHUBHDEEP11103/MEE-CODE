// Last updated: 29/07/2026, 10:07:54
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        return nums[n-k];
    }
};