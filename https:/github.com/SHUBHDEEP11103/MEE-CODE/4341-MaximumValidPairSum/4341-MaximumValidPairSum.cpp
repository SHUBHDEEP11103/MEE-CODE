// Last updated: 06/07/2026, 11:05:59
class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();

        int maxi = nums[0];
        int ans = INT_MIN;
        
        for(int j=k; j<n;j++){
            
            maxi = max(maxi,nums[j-k]);
            int sum = maxi + nums[j];
            ans = max(ans, sum);
        }
        return ans;
    }
};