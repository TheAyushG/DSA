----------------------------------------------------------
Time	- O(n × m)
Space	- O(n × m)
----------------------------------------------------------

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int left = 0;
        int right = m-1;
        int top = 0;
        int bottom = n-1;

        vector<int> ans;

        while(top <= bottom && left <= right){

            for(int i = left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

            for(int i = top; i<=bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom){
                for(int i = right; i>=left; i--){
                ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left<=right){
                for(int i = bottom; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};




*****************************************************************************************************************************************************************************************************************************



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int dir = 0;

        int left = 0;
        int right = m-1;
        int top = 0;
        int bottom = n-1;


        vector<int> ans;

        while(ans.size() < (m * n)){

        if(dir == 0){
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
        }


        if(dir == 1){
            for(int i=top; i<=bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
        }

        if(dir == 2 && top <= bottom){
            for(int i=right; i>=left; i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if(dir == 3 && left <= right){
            for(int i=bottom; i>=top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }

        dir++;

        if(dir == 4){
            dir = 0;
        }
    }

        return ans;
    }
};
