// Last updated: 01/08/2026, 20:21:52
1class Solution {
2public:
3    int countValidPrefixes(string s) {
4        int ans = 0;
5        int count0 = 0;
6        int count1 = 0;
7        int n = 0;
8        for(auto it:s){
9            n++;
10            if(it == '0') count0++;
11            if(it == '1') count1++;
12
13            if(n%2){
14                if(abs(count0-count1)==1){
15                    ans++;
16                }
17            }else if(abs(count0-count1) == 0){
18                ans++;
19            }
20        }
21
22        return ans;
23    }
24};