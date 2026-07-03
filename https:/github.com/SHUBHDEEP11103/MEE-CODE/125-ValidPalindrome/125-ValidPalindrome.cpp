// Last updated: 03/07/2026, 12:25:07
class Solution {
public:
    bool isPalindrome(string s) {
        bool pal = true;
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }

            if(!isalnum(s[j])){
                j--;
                continue;
            }

            if(tolower(s[i]) != tolower(s[j])){
                pal = false;
            }
            i++;
            j--;
        }
        return pal;
    }
};