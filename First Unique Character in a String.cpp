class Solution {
public:
    int firstUniqChar(string s) 
    {
        //vector to store occurance of a - z
        vector<int> countOccurance(26,0);
        
        for(int i=0; i<s.length(); i++)
        {
            countOccurance[s[i] - 'a']++;
        }
        
        //now find the first non repeated occurance. 
        for(int i=0; i<s.length(); i++)
        {
            if(countOccurance[s[i] - 'a']==1)
            {
                return i;
            }
        }
        
        return -1;
    }
};
