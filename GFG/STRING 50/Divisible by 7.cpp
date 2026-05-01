// User function template for C++

class Solution {
  public:
    int isdivisible7(string num) {
        // complete the function here
        
        
        int digit = 0;
        
        for(char c : num){
          digit = (digit * 10 + (c-'0')) % 7;   
        }
        
        if(digit % 7 == 0){
            return 1;
        }
        
        return 0;
    }
};
