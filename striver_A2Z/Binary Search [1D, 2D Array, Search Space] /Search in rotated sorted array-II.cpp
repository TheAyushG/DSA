class Solution {
  public:
  
    bool search(vector<int>& arr, int key) {
        
        int n = arr.size();
        
        int low = 0;
        int high = n-1;
        
        while(low <= high){
            
            int mid = low + (high-low)/2;
            
            // Key found
            if(arr[mid] == key){
                return true;
            }
            
            // Handle duplicates
            if(arr[low] == arr[mid] && arr[mid] == arr[high]){
                low++;
                high--;
            }
            
            // Left half sorted
            else if(arr[low] <= arr[mid]){
                
                if(arr[low] <= key && key <= arr[mid]){
                    high = mid-1;
                }
                
                else{
                    low = mid+1;
                }
            }
            
            // Right half sorted
            else{
                
                if(arr[mid] <= key && key <= arr[high]){
                    low = mid+1;
                }
                
                else{
                    high = mid-1;
                }
            }
        }
        
        return false;
    }
};
