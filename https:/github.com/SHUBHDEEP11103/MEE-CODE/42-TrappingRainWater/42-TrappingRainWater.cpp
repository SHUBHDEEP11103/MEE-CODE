// Last updated: 18/07/2026, 22:26:15
1 class Solution {
2public:
3    int trap(vector<int>& arr) {
4        int n = arr.size();
5        // vector<int> leftmax(n);
6        // vector<int> rightmax(n);
7        int total = 0;
8        int maxi=0;
9        // for(int i=0; i<n; i++){
10        //     leftmax[i] = max(maxi,arr[i]);
11        //     maxi = leftmax[i];
12        // }
13        // maxi = 0;
14        // for(int i=n-1; i>0; i--){
15        //     maxi = max(maxi,arr[i]);
16        //     rightmax[i] = maxi;
17        // }
18        int leftmax = arr[0];
19        
20        for(int i=0; i<n; i++){
21            int rightmax = 0;
22            for(int j=i; j<n; j++){
23                rightmax = max(rightmax,arr[j]);
24            }
25            leftmax = max(leftmax,arr[i]);
26            if(arr[i]<leftmax && arr[i]<rightmax){
27                total += min(leftmax,rightmax)-arr[i];
28            }
29        }
30        return total;
31    }
32};