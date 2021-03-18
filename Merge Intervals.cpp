class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mi; //marged intervals
        if(intervals.size()==0){
            return mi;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> ti=intervals[0]; // ti= temporary interval;
        for(auto it:intervals){
            if(it[0]<=ti[1]){
                ti[1]=max(it[1],ti[1]);
            }
            else{
                mi.push_back(ti);
                ti=it;
            }
        }
        mi.push_back(ti);
        return mi;
    }
};
