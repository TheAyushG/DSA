class Solution {
  public:
    int isValid(string &s) {
        // code here
        int n = s.size();
        
        int count = 0;
        
        for(char c : s){
            if(c == '.')
            count++;
        }
        
        if(count != 3) return false;
        
        vector<string> parts;
        
        string temp = "";
        
        for(char c : s){
            if(c == '.'){
                parts.push_back(temp);
                temp = "";
            }
            
            else{
                temp += c;
            }
        }
        
        parts.push_back(temp);
        
        if(parts.size() != 4) return false;
        
        for(string part : parts){
            if(part.size() == 0) return false;
            
            for(char c : part){
                if(!isdigit(c)) return false;
            }
            
            if(part.size() > 1 && part[0] == '0') return false;
            
            int num = stoi(part);
            
            if(num > 255 || num < 0) return false;
        }
        
        return true;
        
    }
};
