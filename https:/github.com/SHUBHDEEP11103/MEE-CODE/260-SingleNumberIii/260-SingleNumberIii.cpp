// Last updated: 03/07/2026, 12:24:13
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // vector<int> ans;
        // unsigned n = 0;
        unsigned y = 0;
        for(auto i : nums){
            y = y ^ i;
        }
        unsigned x = (y & (y-1)) ^ y;
        // vector<int> buck1;
        // vector<int> buck2;
        // for(auto i : nums){
        //     if(i & x){
        //         buck1.push_back(i);
        //     }
        //     else buck2.push_back(i);
        // }
        // for(auto i : buck1){
        //     n = n^i;
        // }
        // ans.push_back(n);
        // n=0;
        // for(auto i : buck2){
        //     n = n^i;
        // }
        // ans.push_back(n);
        // return ans;
        int buck1 = 0;
        int buck2 = 0;
        for(auto i : nums){
            if(i & x){
                buck1 ^= i;
            }
            else{
                buck2 ^= i;
            }
        }
        return {buck1,buck2};
    }
};