class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
    vector<int> ans;
    int M = mat.size();
    int N = mat[0].size();
    int top = 0, bottom = M - 1;
    int left = 0, right = N - 1;
 
    while (1)
    {
        if (left > right) {
            break;
        }
        // print top row
        for (int i = left; i <= right; i++) {
            ans.push_back(mat[top][i]);
        }
        top++;
 
        if (top > bottom) {
            break;
        }
        // print right column
        for (int i = top; i <= bottom; i++) {
            ans.push_back(mat[i][right]);
        }
        right--;
 
        if (left > right) {
            break;
        }
        // print bottom row
        for (int i = right; i >= left; i--) {
            ans.push_back(mat[bottom][i]);
        }
        bottom--;
 
        if (top > bottom) {
            break;
        }
        // print left column
        for (int i = bottom; i >= top; i--) {
            ans.push_back(mat[i][left]);
        }
        left++;
    }
        return ans;
    }
};
