// Last updated: 31/07/2026, 17:17:11
1class Solution {
2public:
3    int minimumPushes(string word) {
4        int n = word.size();
5        int ans = 0;
6
7        int count = 1;
8        while(n>0){
9            if(n<8){
10                ans += n*count;
11            }else{
12                ans += 8 * count;
13            }
14            count ++;
15            n -= 8;
16        }
17        return ans;
18    }
19};