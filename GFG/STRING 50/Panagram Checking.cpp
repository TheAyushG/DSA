class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        
        vector<int> freq(26, 0);
        
        int n = s.size();
        
        for(int i=0; i<n; i++){
            if(isalpha(s[i])){
                char c = tolower(s[i]);   // handle uppercase
                freq[c - 'a']++;
            }
        }
        
        for(int i=0; i<26; i++){
            if(freq[i] == 0){
                return false;
            }
        }
        
        return true;
    }
};
