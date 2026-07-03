// Last updated: 03/07/2026, 12:26:31
class Solution {
public:
    int reverse(int x) {
        int y = 0;
        while(x != 0){
            
            int digit =  x%10;
            if (y > INT_MAX / 10 || (y == INT_MAX / 10 && digit > 7)) return 0;
            if (y < INT_MIN / 10 || (y == INT_MIN / 10 && digit < -8)) return 0;

            y = y*10 + digit;
            x=x/10;
        }
        return y;
    }
};