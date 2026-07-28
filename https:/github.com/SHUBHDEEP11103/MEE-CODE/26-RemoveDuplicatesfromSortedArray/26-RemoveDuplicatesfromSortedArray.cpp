// Last updated: 28/07/2026, 17:10:53
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        set<int> ans;
5        for(auto i : nums){
6            ans.insert(i);
7        }
8        int i=0;
9        for(auto it : ans){
10            nums[i] = it;
11            i++;
12        }
13        return ans.size();
14    }
15};