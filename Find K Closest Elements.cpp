class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {        
        int n = size(arr), L = 0, R = n - k;
        while (L < R) {
            int mid = (L + R) / 2;            
            if (x - arr[mid] <= arr[mid + k] - x) R = mid;
            else L = mid + 1;   
        }
        return vector<int>(begin(arr) + L, begin(arr) + L + k);
    }
};
