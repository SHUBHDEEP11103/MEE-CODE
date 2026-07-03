// Last updated: 03/07/2026, 12:23:21
class Solution {
public:
    int fib(int n) {
        if(n <=1){
            return n;
        }
        int prev = 0, curr=1;
        for(int i=2; i<=n; i++){
            int temp = curr;
            curr = prev + curr;
            prev = temp;
        }
        return curr;
    }
};