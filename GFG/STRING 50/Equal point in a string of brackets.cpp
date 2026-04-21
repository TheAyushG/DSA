class Solution {
  public:
    int findIndex(string& str) {
        int n = str.size();
        
        vector<int> prefix(n+1, 0);
        vector<int> suffix(n+1, 0);
        
        // prefix: count of '('
        for(int i = 1; i <= n; i++) {
            prefix[i] = prefix[i-1];
            if(str[i-1] == '(') {
                prefix[i]++;
            }
        }
        
        // suffix: count of ')'
        for(int i = n-1; i >= 0; i--) {
            suffix[i] = suffix[i+1];
            if(str[i] == ')') {
                suffix[i]++;
            }
        }
        
        // find index
        for(int i = 0; i <= n; i++) {
            if(prefix[i] == suffix[i]) {
                return i;
            }
        }
        
        return -1;
    }
};
