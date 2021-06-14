class Solution {
public:
    static bool compare(vector<int> a, vector<int> b) {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        int res = 0;
        
        for (int i = 0; i < boxTypes.size(); i++) {
            int tmp = min(truckSize, boxTypes[i][0]);
            truckSize -= tmp;
            res += tmp*boxTypes[i][1];
			
            if (!truckSize) return res;
        }
        return res;
    }
};
