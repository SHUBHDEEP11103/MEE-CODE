// Last updated: 03/07/2026, 12:26:08
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.size();
        int n = haystack.size();
        if( m > n) return -1;
        if(haystack == needle) return 0;
        for(int i = 0; i<=n-m; i++){
            if(haystack.substr(i, m) == needle) return i;
        }
        return -1;
    }
};