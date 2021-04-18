class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.length();
        
        vector<int> mHash(26, 0); // initalise 26 hash table
        for(int i=0;magazine[i]!='\0';i++){
            mHash[magazine[i]-'a']+=1;
        }
        for(int i=0;ransomNote[i]!='\0';i++)
        {
         if(mHash[ransomNote[i]-'a']==0)
                return false;
            mHash[ransomNote[i]-'a'] -= 1;
    }
        return true;
    }
};
