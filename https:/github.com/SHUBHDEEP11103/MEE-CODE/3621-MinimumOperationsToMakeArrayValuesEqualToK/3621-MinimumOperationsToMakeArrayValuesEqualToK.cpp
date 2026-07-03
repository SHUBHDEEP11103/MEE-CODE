// Last updated: 03/07/2026, 12:22:33
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int countK = 0, greater = 0, lastGreater = -1;
        bool smallerExist = false;

        for (int num : nums) {
            if (num == k) {
                countK++;
            } else if (num > k) {
                if (num != lastGreater) {
                    lastGreater = num;
                    greater++;
                }
            } else {
                smallerExist = true;
            }
        }

        if (countK == nums.size()) return 0;
        if (smallerExist) return -1;
        return greater;
    }
};