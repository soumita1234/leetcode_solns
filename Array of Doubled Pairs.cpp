class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int, int> umap;
        for(int i=0; i<arr.size(); i++)
            umap[arr[i]]++;
        
        sort(arr.begin(), arr.end(),[](int i, int j) {return abs(i) < abs(j);});
        
        
        for(int i=0; i<arr.size(); i++){
            if(umap[arr[i]]>0 && umap[2*arr[i]]>0){
                umap[arr[i]]--;
                umap[2*arr[i]]--;
            }
            else if (umap[arr[i]]>0 && umap[2*arr[i]]<=0){
                return false;
            }
        }
        return true;
        
    }
};
