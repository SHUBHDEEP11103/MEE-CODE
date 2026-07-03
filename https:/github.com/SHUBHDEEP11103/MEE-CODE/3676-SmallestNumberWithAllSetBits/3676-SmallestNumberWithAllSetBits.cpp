// Last updated: 03/07/2026, 12:22:25
class Solution {
public:
    int smallestNumber(int n) {
        int count = 0;
        while(n>0){
            count ++;
            n = n >> 1;
        }
        return (pow(2,count)-1);
    }
};