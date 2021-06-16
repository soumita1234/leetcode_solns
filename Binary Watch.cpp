int countSetBits(int n)
{
    
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));
}
class Solution 
{
    
public:
    vector<string> readBinaryWatch(int turnedOn) 
    {
        vector<string> ans;
        if(turnedOn <= 8){
        for(int i=0;i<=11;i++)
        {
            int bits = countSetBits(i);
            int req = turnedOn - bits;
            if(req<0) continue;
            for(int j=0;j<=59;j++)
            {
               int pre = countSetBits(j);
               if(pre == req)
               {
                   string s = "";
                   s+=to_string(i);
                   s+=':';
                   if(j==0) 
                   {
                       s.push_back('0');
                       s.push_back('0');
                   }
                   else if(j>=1 && j<=9)
                   {
                       s+='0';
                       s+='0'+j;
                   }
                   else
                   {
                       s+=to_string(j);
                   }
                   
                   ans.push_back(s);
               }
            }
        }
        }
        return ans;
        
    }
};
