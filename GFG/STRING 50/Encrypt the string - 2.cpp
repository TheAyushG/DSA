class Solution {
  public:
    
    string toHex(int num){
        stringstream ss;
        ss << hex << num;
        return ss.str();
    }
    
    string encryptString(string S) {
        
        int n = S.size();
        vector<string> groups;
        
        for(int i = 0; i < n; i++){
            
            char ch = S[i];
            int count = 0;
            
            while(i < n && S[i] == ch){
                count++;
                i++;
            }
            
            i--;
            
            // store group
            string temp = "";
            temp += toHex(count);  // count first
            temp += ch;            // then character
            
            groups.push_back(temp);
        }
        
        // reverse groups (NOT characters)
        reverse(groups.begin(), groups.end());
        
        // join
        string result = "";
        for(string &g : groups){
            result += g;
        }
        
        return result;
    }
};
