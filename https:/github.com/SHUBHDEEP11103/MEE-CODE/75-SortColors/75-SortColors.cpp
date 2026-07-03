// Last updated: 03/07/2026, 12:25:45
class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        map<int,int> mp;
        for(int i=0; i<n ; i++){
            mp[arr[i]]++;
        }
        for(int i=0; i<mp[0] ; i++){
            arr[i]=0;
        }
        for(int i=mp[0]; i<mp[0] + mp[1] ; i++){
            arr[i]=1;
        }
        for(int i=mp[0] + mp[1]; i<mp[0] + mp[1] + mp[2]; i++){
            arr[i]=2;
        }
    }
};