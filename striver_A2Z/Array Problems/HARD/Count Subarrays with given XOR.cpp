----------------------------------------------
  Time - O(n)
  space - O(n)
----------------------------------------------

class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        
        int n = arr.size();
        
        unordered_map<int,int> map;
        long count = 0;
        int xr = 0;
        
        map[0] = 1;
        
        for(int i=0; i<n; i++){
            xr ^= arr[i];
            
            int x = xr ^ k;
            
            if(map.find(x) != map.end()){
                count += map[x];
            }
            
            map[xr]++;
        }
  
        
        return count;
    }
};



--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


  
----------------------------------------------
  Time - O(n^2)
  space - O(1)
----------------------------------------------
  class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        
        int n = arr.size();
        int count = 0;
        
        for(int i=0; i<n; i++){
            
            int xr = 0;
            
            for(int j=i; j<n; j++){
                
                xr ^= arr[j];
                
                if(xr == k){
                    count++;
                }
                
            }
        }
        
        return count;
    }
};
