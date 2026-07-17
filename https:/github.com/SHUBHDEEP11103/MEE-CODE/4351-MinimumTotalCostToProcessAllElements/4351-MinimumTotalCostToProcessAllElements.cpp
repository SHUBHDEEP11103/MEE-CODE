// Last updated: 17/07/2026, 21:05:45
class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long x = k;
        long long co = 1;
        long long cost = 0;
        const long long MOD = 1e9 + 7;
        for(auto i : nums){
            if(k<i){
                long long need  = (i - k + x -1) / x;
                __int128 sum = (__int128)need * (2 * co + need -1)/2;
                cost = (cost + sum) % MOD;

                co += need;
                k += need * x;
            }
            k -= i;
        }
        
        return (int)cost;
    }
};