class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int flag=0,num;
        vector<int> ret;
        for(;left<=right;left++){
            flag=0;
            num=left;
            for(;num!=0;num/=10)
        if(num%10==0||left%(num%10)!=0)
        flag=1;
        if(flag==0)
        ret.push_back(left);
}

return ret;
    }
};
