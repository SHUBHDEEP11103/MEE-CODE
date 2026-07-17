// Last updated: 17/07/2026, 21:05:48
class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        stringstream s(startTime);
        stringstream e(endTime);
        string col;

        vector<string> start;
        vector<string> end;

        while(getline(s, col, ':')){
            start.push_back(col);
        }
        while(getline(e, col, ':')){
            end.push_back(col);
        }
        int start_sec = stoi(start[0]) * 3600 + stoi(start[1]) * 60 + stoi(start[2]);
        int end_sec = stoi(end[0]) * 3600 + stoi(end[1]) * 60 + stoi(end[2]);

        return abs(end_sec - start_sec);
    }
};