class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<int> currInt = intervals[0];

        int ans = 0;
        for(int i=1; i<n; i++){
            if(intervals[i][0] < currInt[1]){
                if(currInt[1] > intervals[i][1]){
                    currInt[0] = intervals[i][0];
                    currInt[1] = intervals[i][1];
                }  
                ans++;
            }
            else{
                currInt[0] = intervals[i][0];
                currInt[1] = intervals[i][1];
            }
        }
        return ans;

    }
};