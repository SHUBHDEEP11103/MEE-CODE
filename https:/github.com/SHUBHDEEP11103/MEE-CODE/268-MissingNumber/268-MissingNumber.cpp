// Last updated: 29/07/2026, 10:50:44
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4
5        int n = nums.size();
6
7        vector<int> hash(n+1,0);
8
9        for(auto i:nums){
10            hash[i] = 1;
11        }
12        for(int i=0; i<=n; i++){
13            if(hash[i]==0){
14                return i;
15            }
16        }
17        return -1;
18    }
19};