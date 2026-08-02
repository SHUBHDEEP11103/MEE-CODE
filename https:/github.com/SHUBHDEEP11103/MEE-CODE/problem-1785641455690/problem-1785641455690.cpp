// Last updated: 02/08/2026, 09:00:55
1class Solution {
2public:
3    int countRatioSubarrays(vector<int>& nums, int a, int b) {
4        int n = nums.size();
5        int ans = 0;
6        for(int i=0; i<n; i++){
7            int x=0;
8            int y=0;
9            for(int j=i; j<n; j++){
10                if(nums[j]%2){
11                    y++;
12                }else x++;
13                if(y!=0 && x*b <= a*y) ans++;
14            }
15        }
16        return ans;
17    }
18};