class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        if(n==0)
            return 0;
        for(int h=n; h>0; h--)
        {
            if(citations[n-h]>=h)
                return h;
        }
        return 0;
    }
};
