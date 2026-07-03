// Last updated: 03/07/2026, 12:22:23
class Solution {
public:
    int digitFrequencyScore(int n) {

        int arr[10] = {0};
        
        while(n>0){
            arr[n%10] ++;
            n = n/10;
        }
        int ans = 0;
        for(int  i=0; i<10; i++){
            ans += arr[i] * i;
        }
        return ans;
    }
};