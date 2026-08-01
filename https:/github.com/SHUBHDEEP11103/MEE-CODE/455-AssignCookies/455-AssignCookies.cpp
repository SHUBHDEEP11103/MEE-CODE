// Last updated: 01/08/2026, 19:41:52
1class Solution {
2public:
3    int findContentChildren(vector<int>& g, vector<int>& s) {
4        int n = s.size();
5        sort(g.begin(), g.end());
6        sort(s.begin(), s.end());
7        int l=0;
8        int r=0;
9        int max = 0;
10        while(l<n && r<g.size()){
11            if(s[l]>=g[r]){
12                max++;
13                l++;
14                r++;
15            }
16            else if(s[l]<g[r]){
17                l++;
18            }
19        }
20        return max;
21    }
22};