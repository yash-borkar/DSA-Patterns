class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<int> currInt = intervals[0];
        for(int i=1; i<n; i++){
            if(intervals[i][0] <= currInt[1]){
                currInt[1] = max(intervals[i][1], currInt[1]);
            }
            else{
                ans.push_back(currInt);
                currInt = intervals[i];
            }
        }
        ans.push_back(currInt);
        return ans;
    }
};