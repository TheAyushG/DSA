------------------------
Time	O(n)
Space	O(n)
------------------------

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        int hash[n+1] = {0};
        
        int repeating = -1;
        int missing = -1;
        
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
        }
        
        for(int i=1; i<=n; i++){
            if(hash[i] == 2){
                repeating = i;
            }
            
            else if(hash[i] == 0){
                missing = i;
            }
        }
        
       return {repeating,missing};
    }
};



-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


------------------------
Time	- O(n^2)
Space	- O(1)
------------------------


class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        int repeating = -1;
        int missing = -1;
        
        for(int i=1; i<=n; i++){
            
            int count = 0;
            
            for(int j=0; j<n; j++){
                
                if(arr[j] == i){
                    count++;
                }
            }
            
            if(count == 2){
                repeating = i;
            }
            
            else if(count == 0){
                missing = i;
            }
            
            if(repeating != -1 && missing != -1){
                break;
            }
        }
        
        return {repeating,missing};
    }
};
