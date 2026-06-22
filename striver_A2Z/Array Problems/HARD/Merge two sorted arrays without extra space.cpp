-----------------------------
Time	- O(m + n)
Space	- O(1)
-----------------------------

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(i >= 0 && j >= 0){

            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }

            else{
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }

        while(j >= 0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        
    }
};


------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


------------------------------
Time	- O(m + n)
Space	- O(m + n)
------------------------------

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=0;
        int j=0;

        vector<int> ans;

        while(i < m && j < n){

            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }

            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m){
            ans.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }

        for(int k=0; k<n+m; k++){
            nums1[k] = ans[k];
        }
    }
};


-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


--------------------------
Time	- O((m+n) log(m+n))
Space	- O(1)
--------------------------

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
        
        sort(nums1.begin(), nums1.end());
    }
};
