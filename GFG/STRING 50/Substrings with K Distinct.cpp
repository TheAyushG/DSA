class Solution {
  public:
  
    long long atMostK(string &s, int k){
        
        int i = 0;
        int distinct = 0;
        long long ans = 0;
        
        vector<int> freq(26, 0);
        
        for(int j = 0; j < s.size(); j++){
            
            // add character
            if(freq[s[j] - 'a'] == 0){
                distinct++;
            }
            
            freq[s[j] - 'a']++;
            
            // shrink window
            while(distinct > k){
                
                freq[s[i] - 'a']--;
                
                if(freq[s[i] - 'a'] == 0){
                    distinct--;
                }
                
                i++;
            }
            
            // count substrings
            ans += (j - i + 1);
        }
        
        return ans;
    }
  
    int countSubstr(string& s, int k) {
        // code here
        return atMostK(s, k) - atMostK(s, k - 1);
        
    }
};
