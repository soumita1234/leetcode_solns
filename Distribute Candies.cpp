class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        int n=candyType.size();
        int k=n/2;
        for(int i=0;i<candyType.size();i++){
            s.insert(candyType[i]);
        }
        if(s.size()>=n/2){
            return n/2;
        }
       else
            return s.size();
        
    }
};
