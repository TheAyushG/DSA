//Back-end complete function Template for C++
class Solution {
  public:
    string ReFormatString(string S, int K) {
        
        int n = S.size();
        
        string temp = "";
        
        for(int i=0; i<n; i++){
            if(S[i] != '-'){
                temp += toupper(S[i]);
            }
        }
        
        string result = "";
        int count = 0;
        
        // build from right
        for(int i = temp.size() - 1; i >= 0; i--){
            
            result += temp[i];
            count++;
            
            if(count == K){
                result += '-';
                count = 0;
            }
        }
        
        reverse(result.begin(), result.end());
        
         if(!result.empty() && result[0] == '-'){
            result.erase(result.begin());
        }
        
        return result;
    }
};
