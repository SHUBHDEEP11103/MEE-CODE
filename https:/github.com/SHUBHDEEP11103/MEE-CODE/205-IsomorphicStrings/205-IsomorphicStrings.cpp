// Last updated: 03/07/2026, 12:24:50
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        // Arrays to store mapping of characters
        int mapS[256] = {0};  // mapping from s → t
        int mapT[256] = {0};  // mapping from t → s

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // If already mapped, check consistency
            if (mapS[c1] != 0 || mapT[c2] != 0) {
                if (mapS[c1] != c2 || mapT[c2] != c1) {
                    return false;
                }
            } else {
                // Create new mapping
                mapS[c1] = c2;
                mapT[c2] = c1;
            }
        }
        return true;
    }
};
