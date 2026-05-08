class Solution {
public:
    int thirdMax(vector<int>& nums) {

        int n = nums.size();
        long long first_maximum = LONG_MIN;
        long long second_Max = LONG_MIN;
        long long third_Max = LONG_MIN;

        for(int i=0; i<n; i++){

        if(nums[i] == first_maximum || nums[i] == second_Max || nums[i] == third_Max)
        continue;

            if(nums[i] > first_maximum){
                third_Max = second_Max;
                second_Max = first_maximum;
                first_maximum = nums[i];
            }

            else if(nums[i] > second_Max){
                third_Max = second_Max;
                second_Max = nums[i];
            }

            else if(nums[i] > third_Max){
                third_Max = nums[i];
            }
        }

            if(third_Max == LONG_MIN)
            return first_maximum;

        return third_Max;
    }
};
