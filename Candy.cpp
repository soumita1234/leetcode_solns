class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        
        vector<int> candy1(n,1);//initialising everyone with 1 candy
        vector<int> candy2(n,1);
        
        
        // traversing left to right
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                candy1[i]=candy1[i-1]+1;
            }
        }
        //traversing right to left
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                candy2[i]=candy2[i+1]+1;
            }
        }
        
        //taking maximum sum of canddies
        int sum =0;
       for(int i=0;i<n;i++){
           sum+=max(candy1[i],candy2[i]);
       } 
        return sum;
        
    }
};
