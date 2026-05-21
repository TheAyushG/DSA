--------------------------------------------------------------
Time - O(n)
space - O(1)
--------------------------------------------------------------
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        
        int n = a.size();
        int m = b.size();
        
        int i=0;
        int j=0;
        
        vector<int> ans;
        
        while(i < n && j < m){
            
            if(a[i] < b[j]){
                i++;
            }
            
            else if(a[i] > b[j]){
                j++;
            }
            
            else{
                
                if(ans.empty() || ans.back() != a[i]){
                    ans.push_back(a[i]);
                }
                
                i++;
                j++;
            }
        }
        
        return ans;
    }
};






-----------------------------------------------------------------
brute force code
Time - O(n*m)
space - O(1)
-----------------------------------------------------------------
class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        
        int n = arr1.size();
        int m = arr2.size();

        vector<int> ans;
        vector<int> visit(m, 0);

        for(int i=0; i<n; i++){
            
            if(i > 0 && arr1[i] == arr1[i-1])
            continue;

            for(int j=0; j<m; j++){
                if(arr1[i] == arr2[j] && visit[j] == 0){
                    ans.push_back(arr1[i]);
                    visit[j] = 1;
                    break;
                }
                
                if(arr2[j] > arr1[i])
                break;
                
            }
        }

        return ans;
    }
};
