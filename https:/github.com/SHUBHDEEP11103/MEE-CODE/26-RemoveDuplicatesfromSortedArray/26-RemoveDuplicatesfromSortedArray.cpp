// Last updated: 28/07/2026, 17:53:09
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n = nums.size();
5        int q;
6        int p = q = 0;
7        int i=0;
8        
9        for(int q=0; q<n; q++){
10            if(nums[p] != nums[q]){
11                nums[i+1] = nums[q];
12                p = q;
13                i++;
14            }
15        }
16        return i+1;
17    }
18};