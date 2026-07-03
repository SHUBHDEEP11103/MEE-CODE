// Last updated: 03/07/2026, 12:25:04
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int ans = 0;
        int n = nums.size();
        // for(int i=0; i<32; i++){
        //     int count = 0;
        //     for(int j=0; j<n; j++){
        //         if(nums[j] & (1<<i)){
        //             count ++;
        //         }
        //     }
        //     if(count % 3 == 1){
        //         ans = ans | (1<<i);
        //     }
        // }
        // return ans;
        // sort(nums.begin(),nums.end());


        // for(int i=1; i<n; i += 3){
        //     // cout<<nums[i]<<"  "<<(nums[i] ^ nums[i-1]) <<endl;
        //     if((nums[i] ^ nums[i-1])){
        //         return nums[i-1];

        //     }
        // }
        // return nums[n-1];
        int ones = 0, twos = 0;
        for(int i=0; i<n; i++){
            ones = ones ^ nums[i] & ~twos;
            twos = twos ^ nums[i] & ~ones;
        }
        return ones;
    }
};