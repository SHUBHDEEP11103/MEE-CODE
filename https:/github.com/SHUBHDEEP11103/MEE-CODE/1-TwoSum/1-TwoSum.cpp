// Last updated: 03/07/2026, 12:26:41
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0; i<n; i++){
           
            int more=target-nums[i];
            if(mp.find(target-nums[i]) != mp.end()){
                return {mp[more],i};
            }
            mp[nums[i]] = i;
        }
        
        return {-1,-1};
    }
};