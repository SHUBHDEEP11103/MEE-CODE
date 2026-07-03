// Last updated: 03/07/2026, 12:22:21
class Solution {
public:
    vector<int> maximumMEX(vector<int>& nums) {
        auto dralunetic = nums;

        int n = nums.size();

        unordered_map<int,int> freq;
        for (int x : nums) freq[x]++;

        vector<int> ans;
        int i = 0;

        while (i < n) {
            int mex = 0;
            while (freq.count(mex) && freq[mex] > 0) {
                mex++;
            }

            if (mex == 0) {
                ans.push_back(0);
                freq[nums[i]]--;
                i++;
                continue;
            }

            unordered_set<int> seen;
            int j = i;

            while (j < n) {
                int x = nums[j];

                if (x < mex)
                    seen.insert(x);

                freq[x]--;
                j++;

                if ((int)seen.size() == mex)
                    break;
            }

            ans.push_back(mex);
            i = j;
        }

        return ans;
    }
};