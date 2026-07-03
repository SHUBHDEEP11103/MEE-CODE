// Last updated: 03/07/2026, 12:25:43
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> res;
        // res.insert({});

        for(int i = 0; i<(1<<n); i++){
            // bitset<32> b(i);
            // cout<<b<<endl;
            vector<int> x;

            for(int j=0; j<n; j++){
                // cout<<b[j]<<endl;
                if(i & (1<<j)){
                    x.push_back(nums[j]);
                }
                res.insert(x);
            }
        }
        return vector<vector<int>> (res.begin(),res.end());
    }
};