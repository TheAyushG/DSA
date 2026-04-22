class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        
        int c0 = 0, c1 = 0, c2 = 0;
        
        map<pair<int,int>, int> mp;
        mp[{0,0}] = 1;
        
        long long count = 0;
        
        for(char ch : str){
            
            if(ch == '0') c0++;
            else if(ch == '1') c1++;
            else c2++;
            
            pair<int,int> key = {c0 - c1, c0 - c2};
            
            if(mp.find(key) != mp.end()){
                count += mp[key];
            }
            
            mp[key]++;
        }
        
        return count;
    }
};
