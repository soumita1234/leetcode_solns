class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> xx;
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                xx.push_back(matrix[i][j]);
            }
        }
        sort(xx.begin(),xx.end());
        ans=xx[k-1];
        return ans;
    }
};
