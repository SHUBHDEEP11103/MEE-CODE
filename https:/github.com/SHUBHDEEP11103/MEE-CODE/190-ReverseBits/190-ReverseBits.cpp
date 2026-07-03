// Last updated: 03/07/2026, 12:24:53
class Solution {
public:
    int reverseBits(int n) {
        unsigned int res = 0;  // use unsigned to avoid sign issues
        for (int i = 0; i < 32; i++) {
            res <<= 1;         // shift result left
            res |= (n & 1);    // add current bit of n
            n >>= 1;           // shift n right
        }
        return res;
    }
};
