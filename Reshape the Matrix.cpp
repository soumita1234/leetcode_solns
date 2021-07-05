class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int col=mat[0].size();
        
        if(row*col != r*c) return mat;
        
        vector<vector<int>> res(r, vector<int>(c,0));
        int roww=0;
        int coll=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res[roww][coll]=mat[i][j];
                coll++;
                if(coll==c){
                    coll=0;
                    roww++;
                }
            }
        }
        return res;
        
    }
};
