class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
    }
};


class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
        
    }
};

class Solution {
public:
    void reverseString(vector<char>& s) {
        int first=0,last=s.size()-1;
        while(first<last){
            swap(s[first++],s[last--]);
        }
        
    }
};
