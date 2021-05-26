class Solution {
public:
  string toHex(int num) {
    string answer, table = "0123456789abcdef";
    unsigned int n = num;
    
    do{
      answer = table[n%16] + answer;
      n /= 16;
      }while(n);
	
    return answer;
  }
};
