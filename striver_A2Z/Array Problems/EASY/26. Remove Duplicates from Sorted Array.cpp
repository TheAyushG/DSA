class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int j = 1;
        int i = 0;
        
        while(j<n){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
                j++;
            }

            else{
                j++;
            }
        }

        return i+1;
    }
};


************************************************************************************


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int j=0;
        for(int i=1; i<n; i++){
            if(nums[i] != nums[j]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};
