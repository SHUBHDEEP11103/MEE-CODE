// Last updated: 28/07/2026, 17:54:31
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n = nums.size();
5        int i=0;
6        
7        for(int q=0; q<n; q++){
8            if(nums[i] != nums[q]){
9                nums[i+1] = nums[q];
10                i++;
11            }
12        }
13        return i+1;
14    }
15};