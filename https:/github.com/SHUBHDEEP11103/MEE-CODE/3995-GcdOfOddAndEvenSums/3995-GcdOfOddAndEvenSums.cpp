// Last updated: 17/07/2026, 21:05:54
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sodd = pow(n,2);
        int seve = n * (n+1);

        return gcd(sodd,seve);
    }
};