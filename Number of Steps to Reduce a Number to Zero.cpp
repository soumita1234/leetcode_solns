class Solution {
public:
    int numberOfSteps (int num) {
        int c=0;
        int n=num;
        while(n!=0){
           if(n%2==0){
               n=n/2;
               c++;
           } 
            if(n%2!=0)
            {
                n-=1;
                c++;
            }
        }
        return c;
    }
};
