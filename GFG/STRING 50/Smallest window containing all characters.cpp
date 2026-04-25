class Solution {
  public:
    string minWindow(string &s, string &p) {
        // code here
        
        
        int n = s.size();
        int m = p.size();
        
        vector<int> freq(26, 0);
        
        // store freq of p
        for(char c : p)
            freq[c - 'a']++;
        
        int i = 0, j = 0;
        int count = m;
        
        int minLen = INT_MAX;
        int start = 0;
        
        while(j < n){
            
            // include character
            if(freq[s[j] - 'a'] > 0)
                count--;
            
            freq[s[j] - 'a']--;
            
            // when all chars matched
            while(count == 0){
                
                // update answer
                if(j - i + 1 < minLen){
                    minLen = j - i + 1;
                    start = i;
                }
                
                // remove character
                if(freq[s[i] - 'a'] >= 0)
                    count++;
                
                freq[s[i] - 'a']++;
                i++;
            }
            
            j++;
        }
        
        if(minLen == INT_MAX)
            return "";
        
        return s.substr(start, minLen);
        
    }
};
