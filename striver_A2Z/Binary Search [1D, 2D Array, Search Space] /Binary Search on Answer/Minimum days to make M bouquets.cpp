Time - log (n)
Space - O(1)

class Solution {
  public:
  
   bool possible(vector<int>& arr, int day, int m, int k){

        int count = 0;
        int bouquets = 0;

        for(int i = 0; i < arr.size(); i++){

            if(arr[i] <= day){
                count++;
            }
            else{
                count = 0;
            }

            if(count == k){
                bouquets++;
                count = 0;      // Flowers cannot be reusedd
            }
        }

        return bouquets >= m;
    }
    
    
  
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int n = arr.size();

        if((long long)m * k > n){
            return -1;
        }

        int low = *min_element(arr.begin(), arr.end());
        int high = *max_element(arr.begin(), arr.end());

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(possible(arr, mid, m, k)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return low;
    }
};
