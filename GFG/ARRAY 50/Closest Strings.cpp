Time Complexity: O(n)
Space Complexity: O(1)
------------------------------------------------------------------------
class Solution {
  public:

    int shortestDistance(vector<string> &s, string word1, string word2) {    
      
        int n = s.size();
        
        int j   = -1;
        int k   = -1;
        int ans = INT_MAX;
        
        for(int i=0; i<n; i++){
            
            if(s[i] == word1){
                j = i;
            }
            
            if(s[i] == word2){
                k = i;
            }
            
            if(j != -1 && k != -1){
                ans =  min(ans, abs(k-j));
            }
        }
        
        return ans;
    }
};
