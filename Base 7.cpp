class Solution {
public:
    string convertToBase7(int num) {
        string s="";int ng=0;
        if(!num) return "0";
        if (num<0) ng=1;
        num=abs(num);
        while(num)
        {
            s=char(num%7+48)+s;
            num/=7;
        }
        if(ng) s='-'+s;
        return s;
    }
};
