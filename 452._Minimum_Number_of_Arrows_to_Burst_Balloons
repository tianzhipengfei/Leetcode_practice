class Solution {    
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        if(points.size() == 0){
            return 0;
        }
        sort(points.begin(), points.end());
        int cur = points[0].second, ans = 1;
        for(int i = 1; i < points.size(); ++i){
            if (points[i].first <= cur) {
                cur = min(cur, points[i].second);
            } else {
                ++ans;
                cur = points[i].second;
            }
        }
        return ans;
    }
};
