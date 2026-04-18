class Solution {
  public:
    int longestKSubstr(string s, int k) {
        
        unordered_map<char, int> freq;
        
        int left = 0;
        int maxLen = -1;
        
        for(int right = 0; right < s.length(); right++) {
            
            // include current character
            freq[s[right]]++;
            
            // if distinct chars > k → shrink window
            while(freq.size() > k) {
                freq[s[left]]--;
                
                if(freq[s[left]] == 0) {
                    freq.erase(s[left]);
                }
                
                left++;
            }
            
            // check exactly k distinct
            if(freq.size() == k) {
                maxLen = max(maxLen, right - left + 1);
            }
        }
        
        return maxLen;
    }
};
