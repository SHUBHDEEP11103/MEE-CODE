// Last updated: 03/07/2026, 12:25:40
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr(m+n);
        int i=m-1;
        int j=n-1;
        int idx = m+n-1;
        nums1.resize(m+n);

        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[idx] = nums1[i];
                i-- , idx--;
            }
            else{
                nums1[idx] = nums2[j];
                j-- , idx--;
            }
        }
        while(j>=0){
            nums1[idx--] = nums2[j--];
        }
       
    }
};