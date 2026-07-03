// Last updated: 03/07/2026, 12:26:28
class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        long long reversed = 0;
        int original = x;
        
        while (x > 0) {
            int digit = x % 10; // Get the last digit
            reversed = reversed * 10 + digit; // Build the reversed number
            x /= 10; // Remove the last digit from x
        }
        
        return original == reversed; 
    }
};