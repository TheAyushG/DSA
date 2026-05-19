Time	- O(n log n)
Space	- O(1)
--------------------------------------------------------
class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        
        int n = arr.size();
        int m = dep.size();
        
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int platform = 0;
        int ans = 0;

        
        int i = 0;
        int j = 0;
        
        while(i<n && j<m){
            
            if(arr[i] <= dep[j]){
                platform++;
                ans = max(ans,platform);
                i++;
            }
            
            else {
                platform--;
                j++;
            }
            
            
        }
        
        return ans;
    }
};
