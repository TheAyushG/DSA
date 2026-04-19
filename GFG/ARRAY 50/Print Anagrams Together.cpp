Time - O(n * m log m)
Space - O(n * m)
----------------------------------------------------------
class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        
        int n = arr.size();
        
        unordered_map<string, vector<string>> map;
        
        for(int i=0; i<n; i++){
            string word = arr[i];
            string key = word;
            
            sort(key.begin(), key.end());  // create key
            
            map[key].push_back(word);
        }
        
        vector<vector<string>> result;
        
        for(auto p : map){
            result.push_back(p.second);
        }
        
        return result;
    }
};
