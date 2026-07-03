// Last updated: 03/07/2026, 12:22:19
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans = 0;
        for(int i : nums){
            if(!(i & 1)){
                ans = ans | i;
            }
        }
        return ans;
    }
};