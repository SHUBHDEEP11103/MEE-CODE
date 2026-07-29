// Last updated: 29/07/2026, 10:26:56
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        int ans; 
6        bool flag = true;
7        for(int i=0; i<=n; i++){
8            flag = false;
9            for(auto j : nums){
10                if(i==j){
11                    flag = true;
12                    break;
13                }
14            }
15            if(!flag){
16                ans = i;
17                break;
18            }
19        }
20        return ans;
21    }
22};