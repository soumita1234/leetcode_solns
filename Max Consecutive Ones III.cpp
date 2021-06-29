class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0, end = 0, zeros = 0, res = 0;
        
        for (end = 0; end < nums.size(); end++) {
            
            // If we reached a zero, increase the zero counter.
            if (!nums[end])
                zeros++;
            
            // If the number of zeros is more than k, we finished with this subarray.
            // Now we can save the length and continue looking if we find a better one.
            while (zeros > k) {
                if (!nums[start]) zeros--;
                start++;
            } 
            
            res = max(res, end - start + 1);
        }
        
        return res;
    }
};
