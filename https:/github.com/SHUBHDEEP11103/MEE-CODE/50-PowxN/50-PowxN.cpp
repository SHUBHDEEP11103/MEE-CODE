// Last updated: 03/07/2026, 12:26:02
class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0){
            long long N = n;
            return myPow(1/x,abs(N));
        }
        double temp = 1;
        while(n>0){
            if(n%2 == 0){
                x = x*x;
                n = n/2;
            }
            else{
                temp = temp * x;
                n = n - 1;
            }
        }
        return temp;
    }
};