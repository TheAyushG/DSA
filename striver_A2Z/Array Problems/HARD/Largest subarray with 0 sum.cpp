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
