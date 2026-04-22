class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        // code here
        
        if(s1.length() != s2.length()) return false;
        
        vector<int> freq(26,0);
        
        for(char ch : s1){
            freq[ch - 'a']++;
        }
        
        for(char ch : s2){
            freq[ch - 'a']--;
        }
        
        int changes = 0;
        
        for(int i=0; i<26; i++){
            if(freq[i] > 0){
                changes += freq[i];
            }
        }
        
        if(changes <= k){
            return true;
        }
        
        return false;
    }
};
