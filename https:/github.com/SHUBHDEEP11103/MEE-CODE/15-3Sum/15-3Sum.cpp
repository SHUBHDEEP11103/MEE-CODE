// Last updated: 15/07/2026, 17:25:40
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        int n = nums.size();
5        sort(nums.begin(),nums.end());
6        vector<vector<int>> ans;
7        for(int i=0; i<n; i++){
8            if(i>0 && nums[i]==nums[i-1]){
9                continue;
10            }
11            int first = i+1;
12            int last = n-1;
13            while(first<last){
14                int sum = nums[i]+nums[first]+nums[last];
15                if(sum == 0){
16                    ans.push_back({nums[i],nums[first],nums[last]});
17                    first++;
18                    last--;
19                    while(first < last && nums[first]==nums[first-1]) first++;
20                    while(first < last && nums[last]==nums[last+1]) last--;
21                }
22                if(sum<0) first++;
23                else if(sum>0) last--;
24            }
25        }
26        return ans;
27    }
28};