bool cmp(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
    }

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;
        sort(points.begin(), points.end(), cmp);
        int n = points.size();
        int end = points[0][1];
        int i = 1;
        while(i < n){
            if(points[i][0] > end){
                ans++;
                end = points[i][1];
            }
            i++;
        }
        return ans;
    }
};