// Last updated: 03/07/2026, 12:26:21
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();

        int ans = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {

                    int s = nums[i] + nums[j] + nums[k];

                    if(abs(target - s) < abs(target - ans)) {
                        ans = s;
                    }
                }
            }
        }

        return ans;
    }
};