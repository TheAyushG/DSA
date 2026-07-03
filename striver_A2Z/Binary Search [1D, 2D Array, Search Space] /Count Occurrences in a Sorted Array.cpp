class Solution {
  public:

    int lowerBound(vector<int>& nums, int target) {
        // code here
        int n = nums.size();
        
        int low  = 0;
        int high = n-1;
        int ans = n;
        
        while(low <= high){
            int mid = (low + high) / 2;
            
            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            
            else{
                low = mid + 1;
            }
        }
        
        return ans;    
    }



    int upperBound(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int left  = 0;
        int right = n-1;
        int ans = n;
        
        while(left <= right){
            int mid   = left + (right - left) / 2;
            
            if(nums[mid] > target){
                ans = mid;
                right = mid-1;
            }
            
            else{
                left = mid+1;
            }
        }
        
        return ans;
    }



    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int lb = lowerBound(nums, target);
        if(lb == n || nums[lb] != target) return {-1,-1};
        return {lb, upperBound(nums, target) - 1};
    }



    int countFreq(vector<int>& arr, int target) {

        // searchRange returns vector<int>
        vector<int> ans = searchRange(arr, target);

        if(ans[0] == -1)
            return 0;

        return ans[1] - ans[0] + 1;
    }
};
