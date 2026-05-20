class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
    int n = nums.size();

    int i = 0;
    int j = 0;

    while(j<n){
        if(nums[i] == 0){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }

        if(nums[i] != 0 && nums[j] != 0){
            i++;
            j++;
        }

        while(j < n && nums[j] == 0){
            j++;
        }
    }
              
    }
};

**************************************************************************************************************

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
    int n = nums.size();
    int j = 0;

    for(int i=0; i<n; i++){
        if(nums[i] != 0){
            if(i != j){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
            j++;
        }
      }          
    }
};
