// Last updated: 16/07/2026, 20:41:59
1class Solution {
2public:
3    long long gcdSum(vector<int>& nums) {
4int n = nums.size();
5        std::vector<int> prefixGcd(n);
6        
7        int currentMax = 0;
8        // Step 1: Construct prefixGcd array
9        for (int i = 0; i < n; ++i) {
10            currentMax = std::max(currentMax, nums[i]);
11            prefixGcd[i] = std::gcd(nums[i], currentMax);
12        }
13        
14        // Step 2: Sort prefixGcd in non-decreasing order
15        std::sort(prefixGcd.begin(), prefixGcd.end());
16        
17        // Step 3: Form pairs using two pointers
18        long long totalSum = 0;
19        int left = 0;
20        int right = n - 1;
21        
22        while (left < right) {
23            totalSum += std::gcd(prefixGcd[left], prefixGcd[right]);
24            left++;
25            right--;
26        }
27        
28        return totalSum;
29    }
30};