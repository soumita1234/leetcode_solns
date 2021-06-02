class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
         vector<vector<int>> ans;
        int i=0;
        int n=intervals.size();
        while(i<n && intervals[i][1] < newInterval[0])
            ans.push_back(intervals[i++]);
        
        vector<int> mi=newInterval;
         while(i<n && intervals[i][0] <= newInterval[1]){
             mi[0]=min(mi[0],intervals[i][0]);
             mi[1]=max(mi[1],intervals[i++][1]);
         }
        ans.push_back(mi);
        while(i<n)
            ans.push_back(intervals[i++]);
        return ans;
        
    }
};
