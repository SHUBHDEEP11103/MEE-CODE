// Last updated: 03/07/2026, 12:26:00
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = LONG_MIN;
        int n = nums.size();
        long long temp = 0;
        for(int i=0; i<n; i++){
            temp = temp + nums[i];
            if(sum < temp){
                sum = temp;
            }
            if(temp < 0){
                temp = 0;
            }
        }
        return sum;
    }
};