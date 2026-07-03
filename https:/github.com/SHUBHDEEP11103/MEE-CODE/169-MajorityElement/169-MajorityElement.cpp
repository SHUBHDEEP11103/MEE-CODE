// Last updated: 03/07/2026, 12:24:54
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        int count = 0;
        int el;
        for(int i=0; i<n; i++){
            if(count == 0){
                el = nums[i];
            }
            if(nums[i]==el){
                count ++;
            }else{
                count --;
            }
        }
        int c=0;
        for(int i=0; i<n; i++){
            if(nums[i]==el){
                c++;
            }
        }
        if(c > n/2){
            return el;
        }else{
            return -1;
        }

    }
};