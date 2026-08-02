// Last updated: 02/08/2026, 08:35:00
1class Solution {
2public:
3    long long maxPairStrength(vector<int>& nums) {
4        int n = nums.size();
5        long long ans = INT_MIN;
6
7        for(int i=0; i<n; i++){
8            for(int j=0; j<n; j++){
9                if(i==j) continue;
10                long long den = pow(gcd(nums[i],nums[j]),2);
11                long long num = (long long)nums[i]*nums[j];
12                ans = max(ans,num/den);
13            }
14        }
15        return ans;
16    }
17};