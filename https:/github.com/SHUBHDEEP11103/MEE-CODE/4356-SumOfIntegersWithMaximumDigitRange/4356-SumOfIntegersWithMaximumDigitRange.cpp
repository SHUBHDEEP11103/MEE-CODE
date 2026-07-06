// Last updated: 06/07/2026, 11:05:43
class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        // map<int,int> mp;
        int ans = 0;
        int max_range = INT_MIN;
        
        for(auto i : nums){
            int maxi = INT_MIN;
            int mini = INT_MAX;
            int no = i;
            if(no == 0){
                maxi = mini = 0;
            }
            while(no){
                maxi = max(maxi,no%10);
                mini = min(mini,no%10);
                no = no/10;
            }
            int range = maxi - mini;
            if(range > max_range){
                max_range = range;
                ans = i;
            }else if(range == max_range){
                ans += i;
            }
            // mp[i] = range;
            // max_range = max(max_range, range);
        }
        // long long ans = 0;

        // for(auto i : mp){
        //     if(i.second == max_range){
        //         ans += i.first;
        //     }
        // }
        return ans;
    }
};