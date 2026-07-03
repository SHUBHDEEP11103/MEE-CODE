// Last updated: 03/07/2026, 12:26:30
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        
        // 1. Skip leading whitespace
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        // 2. Check for sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        // 3. Conversion and 4. Rounding
        long result = 0; // Use long to handle temporary overflow
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            // Check for 32-bit signed integer range
            if (sign == 1 && result > INT_MAX) return INT_MAX;
            if (sign == -1 && -result < INT_MIN) return INT_MIN;
            
            i++;
        }
        
        return (int)(result * sign);
    }
};