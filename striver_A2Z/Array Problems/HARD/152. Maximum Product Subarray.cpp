--------------------
Time - O(n)
Space - O(1) 
--------------------

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int maxProduact = INT_MIN;

        int pre = 1;
        int suff = 1;

        for(int i=0; i<n; i++){
            if(pre == 0){
                pre = 1;
            }

            if(suff == 0){
                suff = 1;
            }

            pre *= nums[i];
            suff *= nums[n-i-1];

            maxProduact = max(maxProduact, max(pre, suff));
        }

        return maxProduact;
    }
};



=============================================================================================================================================================================================================================

--------------------
Time - O(n^2)
Space - O(1) 
--------------------

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();

        int maxProduact = INT_MIN;

        for(int i=0; i<n; i++){

            int producat = 1;

            for(int j=i; j<n; j++){
                producat *= nums[j];
                maxProduact = max(producat, maxProduact);
            }  
        }

        return maxProduact;
    }
};
