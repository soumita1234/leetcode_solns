class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        for(int i =0; i < nums1.size();i++)
        {
            auto it = s.find(nums1[i]);
            if(it== s.end())
              s.insert(nums1[i]);
            
        }
        //cout<<s.size()<<endl;
        vector<int> res;
        for(int i =0; i < nums2.size();i++)
        {
            auto it = s.find(nums2[i]);
            if(it!= s.end()) 
            {   s.erase(it);
                res.push_back(nums2[i]);
             }
            
        }
        return res;
    }
};
