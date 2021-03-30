class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==2||n==1)return 0;
        int count=0;
        int m=n+1;
        int isPrime[m];
        for(int i=0;i<m;i++){
            isPrime[i]=1;
        }
        isPrime[0]=0;
        isPrime[1]=0;
        for(int i=2;i<m;i++){
            if(isPrime[i]){
                  for(int j=2;i*j<m;j++){
                    isPrime[i*j]=0;
                  }
            }          
        }
        for(int i=2;i<n;i++){
            if(isPrime[i])count++;
        }
        return count;
    }
};
