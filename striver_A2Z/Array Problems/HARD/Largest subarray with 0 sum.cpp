-------------------------------------
Time	- O(n)
Space	- O(n)
-------------------------------------

class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        unordered_map<int,int> map;
        
        int sum = 0;
        int maxLength = 0;
        
        for(int i=0; i<n; i++){
            
            sum += arr[i];
            
            if(sum == 0){
                maxLength = i+1;
            }
            
            else if(map.find(sum) != map.end()){
                int length = i - map[sum];
                
                maxLength = max(maxLength, length);
            }
            
            else{
                map[sum] = i;
            }
        }
        
        return maxLength;
    }
};


-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        int maxLength = 0;
        
        for(int i=0; i<n; i++){
            int sum = 0;
            
            for(int j=i; j<n; j++){
                sum += arr[j];
                
                if(sum == 0){
                    int length = j-i+1;
                    maxLength = max(length, maxLength);
                
                }
            }
        }
        
        return maxLength;
    }
};
