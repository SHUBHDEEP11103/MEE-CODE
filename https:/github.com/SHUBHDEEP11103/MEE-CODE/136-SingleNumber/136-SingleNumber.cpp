// Last updated: 03/07/2026, 12:25:05
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int,int> mp;
        // for(int i=0; i<nums.size(); i++)
        // for(auto i : nums){
        //     mp[i] ++;
        // }
        // for(auto it : mp){
        //     if(it.second == 1){
        //         return it.first;
        //     }
        // }

        // return 0;
        int n = nums.size();
        int ans = nums[0];

        for(int i=1; i<n; i++){
            ans = ans ^ nums[i];
        }
        return ans;

    }
};