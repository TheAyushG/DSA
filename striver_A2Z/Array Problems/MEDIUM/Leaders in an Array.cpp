Time  - O(n)
Space - O(n)
-------------------------------------------
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        int largest = INT_MIN;
        vector<int> result;
        
        for(int i=n-1; i>=0; i--){
            if(arr[i] >= largest){
                result.push_back(arr[i]);
                largest = arr[i];
            }
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
