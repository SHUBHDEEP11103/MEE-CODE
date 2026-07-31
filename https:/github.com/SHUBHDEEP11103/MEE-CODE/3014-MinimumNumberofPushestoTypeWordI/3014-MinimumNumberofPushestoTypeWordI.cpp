// Last updated: 31/07/2026, 08:21:59
1class Solution {
2public:
3    int minimumPushes(string word) {
4        int n = word.size();
5        int ans = 0;
6        // if(n <= 8){
7        //     return n;
8        // }
9        int count = 1;
10        while(n>0){
11            if(n<8){
12                ans += n*count;
13            }else{
14                ans += 8 * count;
15            }
16            count ++;
17            n -= 8;
18        }
19        return ans;
20    }
21};