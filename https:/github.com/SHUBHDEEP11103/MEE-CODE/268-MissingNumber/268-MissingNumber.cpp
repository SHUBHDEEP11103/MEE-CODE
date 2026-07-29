// Last updated: 29/07/2026, 10:32:10
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        int total=0;
6        for(auto i:nums){
7            total += i;
8        }
9        int sum = (n*(n+1))/2;
10        
11        return sum-total;
12    }
13};