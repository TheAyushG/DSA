Time - O(n+m)
space - O(1)
-----------------------------------------------------------

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        
        int n = a.size();
        int m = b.size();
        
        int i=0;
        int j=0;
        
        vector<int> array;
        while(i<n && j<m){
            
            if(a[i] <= b[j]){
                if(array.size() == 0 || array.back() != a[i]){
                    array.push_back(a[i]);
                }
                i++;
            }
            
            else if(b[j] < a[i]){

                if(array.size() == 0 || array.back() != b[j]){
                    array.push_back(b[j]);
                }
                j++;
       
            }
        }
        
        while(i<n){   
                if(array.size() == 0 || array.back() != a[i]){
                    array.push_back(a[i]);
                }
                i++;
        }
        
        while(j<m){
                if(array.size() == 0 || array.back() != b[j]){
                    array.push_back(b[j]);
                }
                j++;
        }
            
        return array;
    }
};


********************************************************************************************************************************************************
Time - O(n log n + n log n)
space - O(n+m)

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        
        int n = a.size();
        int m = b.size();
        
        set<int> s1;
        
        for(int i=0; i<n; i++){
            s1.insert(a[i]);
        }
        
        for(int i=0; i<m; i++){
            s1.insert(b[i]);
        }
        
        vector<int> arr;
        
        for(auto num : s1){
            arr.push_back(num);
        }
        
        return arr;
        
    }
};
