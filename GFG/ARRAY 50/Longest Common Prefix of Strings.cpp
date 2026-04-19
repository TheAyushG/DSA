// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        
        
        int n = arr.size();
        string result = "";
        
        sort(arr.begin(), arr.end());
        
        string first = arr[0];
        string last  = arr[n-1];
        
        for(int i=0; i<first.length(); i++){
            if(first[i] != last[i]){
                break;
            }
            
          result.push_back(first[i]);  
        }
        
        return result;
        
    }
};
