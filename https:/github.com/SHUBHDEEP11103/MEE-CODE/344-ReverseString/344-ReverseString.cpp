// Last updated: 03/07/2026, 12:23:59
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0; 
        int j = s.size()-1;
        while(i<j){
            s[i] = s[i]+s[j];
            s[j] = s[i]-s[j];
            s[i] = s[i]-s[j];

            i++;
            j--;
        }
    }
};