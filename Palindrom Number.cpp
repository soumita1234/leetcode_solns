class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        unsigned int ans=0;
        if(x<0)
                return false;
        while(x!=0){

            ans=(ans*10)+(x%10);
            x/=10;
        }
            if(n==ans){
                return true;
             }
        else{
            return false;
        }
    }
};
