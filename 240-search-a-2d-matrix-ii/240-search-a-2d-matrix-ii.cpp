class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int r=0, c=cols-1;
        while(r<rows && c>=0)
        {
            int x = matrix[r][c];
            if(x==target)
                return true;
            else if(x>target)
                c--;
            else
                r++;
        }
        return false;
    }
};