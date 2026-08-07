// Last updated: 07/08/2026, 08:59:38
1class Solution {
2public:
3    bool lemonadeChange(vector<int>& bills) {
4        int ten = 0;
5        int five = 0;
6        bool ans = true;
7        for(auto i : bills){
8            if(i==5){
9                five ++;
10            }
11            else if(i == 10){
12                if(five <= 0){
13                    ans = false;
14                    break;
15                }
16                ten ++;
17                five --;
18            }
19            else if(i == 20){
20                if(ten<=0){
21                    if(five<3) {
22                        ans = false;
23                        break;
24                    }else{
25                        five -= 3;
26                    }
27                }else{
28                    if(five<1){
29                        ans = false;
30                        break;
31                    }else{
32                        ten --;
33                        five --;
34                    }
35                }
36            }
37        }
38        return ans;
39    }
40};