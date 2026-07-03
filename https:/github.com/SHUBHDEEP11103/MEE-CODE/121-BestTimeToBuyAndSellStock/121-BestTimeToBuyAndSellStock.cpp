// Last updated: 03/07/2026, 12:25:08
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int diff = 0, buy = prices[0], temp = 0, sell = 0;
        for(int i=1; i<n; i++){
            sell = prices[i];
            if(buy>prices[i-1]){
                buy = prices[i-1];
            }
            temp = sell - buy;
            if(diff<temp){
                diff = temp;
            }
            
        }
        return diff;
    }
};