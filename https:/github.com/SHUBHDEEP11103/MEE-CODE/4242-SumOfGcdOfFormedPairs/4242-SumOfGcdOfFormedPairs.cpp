// Last updated: 17/07/2026, 21:05:52
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
int n = nums.size();
        std::vector<int> prefixGcd(n);
        
        int currentMax = 0;
        // Step 1: Construct prefixGcd array
        for (int i = 0; i < n; ++i) {
            currentMax = std::max(currentMax, nums[i]);
            prefixGcd[i] = std::gcd(nums[i], currentMax);
        }
        
        // Step 2: Sort prefixGcd in non-decreasing order
        std::sort(prefixGcd.begin(), prefixGcd.end());
        
        // Step 3: Form pairs using two pointers
        long long totalSum = 0;
        int left = 0;
        int right = n - 1;
        
        while (left < right) {
            totalSum += std::gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }
        
        return totalSum;
    }
};