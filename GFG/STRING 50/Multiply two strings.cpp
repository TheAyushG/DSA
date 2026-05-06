class Solution {
  public:
    string multiplyStrings(string s1, string s2) {
        
        // 1. Handle sign
        bool negative = false;
        
        if(s1[0] == '-' && s2[0] != '-') negative = true;
        else if(s1[0] != '-' && s2[0] == '-') negative = true;
        
        if(s1[0] == '-') s1 = s1.substr(1);
        if(s2[0] == '-') s2 = s2.substr(1);
        
        // 2. Remove leading zeros
        while(s1.size() > 1 && s1[0] == '0') s1.erase(0,1);
        while(s2.size() > 1 && s2[0] == '0') s2.erase(0,1);
        
        // If any number is 0
        if(s1 == "0" || s2 == "0") return "0";
        
        int n = s1.size();
        int m = s2.size();
        
        // 3. Result array
        vector<int> result(n + m, 0);
        
        // 4. Multiply digits
        for(int i = n - 1; i >= 0; i--){
            for(int j = m - 1; j >= 0; j--){
                
                int mul = (s1[i] - '0') * (s2[j] - '0');
                
                int pos1 = i + j;
                int pos2 = i + j + 1;
                
                int sum = mul + result[pos2];
                
                result[pos2] = sum % 10;
                result[pos1] += sum / 10;
            }
        }
        
        // 5. Convert to string
        string ans = "";
        
        for(int num : result){
            if(!(ans.empty() && num == 0)){  // skip leading zeros
                ans += (num + '0');
            }
        }
        
        // 6. Add sign
        if(negative) ans = "-" + ans;
        
        return ans;
    }
};
