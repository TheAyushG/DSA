----------------------------
Time	- O(log n)
Space	- O(1)
---------------------------

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
};




------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



----------------------------
Time	- O(n)
Space	- O(1)
----------------------------

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int first = -1;
        int last = -1;

        for(int i=0; i<n; i++){

            if(nums[i] == target){
                
                if(first == -1){
                    first = i;
                }

                last = i;
            }
        }

        return {first, last};
    }
};
