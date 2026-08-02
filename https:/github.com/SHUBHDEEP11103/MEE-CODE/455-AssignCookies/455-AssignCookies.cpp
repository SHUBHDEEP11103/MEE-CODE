// Last updated: 02/08/2026, 06:29:22
1class Solution {
2public:
3    int findContentChildren(vector<int>& g, vector<int>& s) {
4        int n = s.size();
5        sort(g.begin(), g.end());
6        sort(s.begin(), s.end());
7        int l=0;
8        int r=0;
9        while(l<s.size() && r<g.size()){
10            if(g[r] <= s[l]){
11                r++;
12            }
13            l++;
14        }
15        return r;
16    }
17};