// Last updated: 29/07/2026, 10:00:15
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int n = nums.size();
5        int c,d = 0;
6        for(int i=0; i<n; i++){
7            if(nums[i]==1){
8                d++;
9            }else{
10                d = 0;
11            }
12            c = max(c,d);
13        }
14        return c;
15    }
16};