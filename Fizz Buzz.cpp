class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> res;
        
        
        
        for(int i=1;i<=n;i++){
            bool d3 = (i % 3 == 0);
      bool d5 = (i % 5 == 0);
            if(d3 && d5){
               res.push_back("FizzBuzz"); 
            }
            else if(d3){
                res.push_back("Fizz");
            }
            else if(d5){
                res.push_back("Buzz");
            }
            else{
                res.push_back(to_string(i));
            }
        }
        return res;
        
    }
};
