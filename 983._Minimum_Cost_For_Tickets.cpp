class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int* dp = new int[days.size() + 1];
        int day = 0;
        int week = 0;
        int month = 0;
        dp[0] = 0;
        for(int i = 0; i < days.size(); ++i){
            day = days[i];
            while(days[week] < days[i] - 6) {
                
                week++;
            }
            while(days[month] < days[i] - 29) {
                month++;
            }
             dp[i + 1] = min(min(dp[i] + costs[0], dp[week] + costs[1]), dp[month] + costs[2]);
        }
        return dp[days.size()];
    }
};
