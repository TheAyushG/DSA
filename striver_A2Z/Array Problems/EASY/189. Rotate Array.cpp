Time - O(n)
space - O(1)
----------------------------------------------------
class Solution {

    void rev(vector<int>& nums, int start, int end){
        while(start <= end){
            int temp = nums[end];
            nums[end] = nums[start];
            nums[start] = temp;

            start++;
            end--;
        }
    }

    public:
        void rotate(vector<int>& nums, int k) {

    int n = nums.size();
    if(n == 0) return;
    k = k % n;

    rev(nums, 0, n-1);
    rev(nums, 0, k-1);
    rev(nums, k, n-1);

    }
};



***************************************************************************************************************


Time - O(n*k)
space - O(1)
----------------------------------------------

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {

    int n = nums.size();

    k = k % n;
    
    for(int i=0; i<k; i++){

        int last = nums[n-1];

        for(int j=n-1; j>0; j--){

            nums[j] = nums[j-1];
        }

        nums[0] = nums[last];
    }

    }
};
