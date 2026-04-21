// User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        
        int n = A.length();
        
        string temp = "";
        int count = 0;
        
        while(temp.length() < B.length()){
            
            temp += A;
            count++;
        }
            
        if(temp.find(B) != string::npos) {
            return count;
        }
        
        temp += A;
        count++;
        
        if(temp.find(B) != string::npos) {
            return count;
        }
        
        
        return -1;
    }
};
