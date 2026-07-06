// Last updated: 06/07/2026, 11:05:57
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        bool ans = true;
        for(int i=0; i<n; i++){
            if(i==n/2){
                continue;
            }
            if(nums[i] == nums[n/2]){
                ans = false;
            }
        }
        return ans;
    }
};