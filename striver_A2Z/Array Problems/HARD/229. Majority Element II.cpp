class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();

        int count1 = 0;
        int count2 = 0;

        int ele1 = INT_MIN;
        int ele2 = INT_MIN;

        // Find candidates
        for(int i = 0; i < n; i++) {

            if(count1 == 0 && ele2 != nums[i]) {
                count1 = 1;
                ele1 = nums[i];
            }

            else if(count2 == 0 && ele1 != nums[i]) {
                count2 = 1;
                ele2 = nums[i];
            }

            else if(ele1 == nums[i]) {
                count1++;
            }

            else if(ele2 == nums[i]) {
                count2++;
            }

            else {
                count1--;
                count2--;
            }
        }

        // Verify candidates
        vector<int> ans;

        int cunt1 = 0;
        int cunt2 = 0;

        for(int i = 0; i < n; i++) {

            if(ele1 == nums[i])
                cunt1++;

            if(ele2 == nums[i])
                cunt2++;
        }

        int mini = (n / 3) + 1;

        if(cunt1 >= mini)
            ans.push_back(ele1);

        if(cunt2 >= mini)
            ans.push_back(ele2);

        sort(ans.begin(), ans.end());

        return ans;
    }
};


*******************************************************************************************************

    
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        
        unordered_map<int,int> map;
        vector<int> ans;

        for(int i=0; i<n; i++){
            map[nums[i]]++;
        }

        for(auto it : map){
            if(it.second > n/3){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};
