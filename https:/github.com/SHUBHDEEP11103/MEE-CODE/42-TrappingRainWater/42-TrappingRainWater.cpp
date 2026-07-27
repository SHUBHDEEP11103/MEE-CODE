// Last updated: 28/07/2026, 00:25:32
1 class Solution {
2public:
3    int trap(vector<int>& arr) {
4        int n = arr.size();
5        int total = 0;
6        int leftmax = 0;
7        int rightmax = 0;
8        int l = 0;
9        int r = n-1;
10        while(l < r){
11            if(arr[l] < arr[r]){
12                if(leftmax > arr[l]){
13                    total += leftmax - arr[l];
14                }
15                else leftmax = arr[l];
16                l ++;
17            }
18            else{
19                if(rightmax > arr[r]){
20                    total += rightmax - arr[r];
21                }else rightmax = arr[r];
22                r --;
23            }
24
25        }
26        
27        return total;
28    }
29};