class Solution {
  public:
    int myAtoi(string &s) {
        // code here
         int i = 0;
        int n = s.size();
        
        // 1. Skip leading spaces
        while(i < n && s[i] == ' ') i++;
        
        // 2. Handle sign
        int sign = 1;
        if(i < n && (s[i] == '+' || s[i] == '-')){
            if(s[i] == '-') sign = -1;
            i++;
        }
        
        // 3. Read digits and build number
        long num = 0;  // use long to detect overflow
        
        while(i < n && isdigit(s[i])){
            
            int digit = s[i] - '0';
            
            // 4. Handle overflow BEFORE updating num
            if(num > INT_MAX / 10 || 
              (num == INT_MAX / 10 && digit > 7)){
                
                if(sign == 1) return INT_MAX;
                else return INT_MIN;
            }
            
            num = num * 10 + digit;
            i++;
        }
        
        // 5. Return final result
        return (int)(sign * num);
    }
};
