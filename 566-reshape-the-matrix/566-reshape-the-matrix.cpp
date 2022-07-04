class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() != (r*c))
            return mat;
        
        vector<vector<int>> v(r, vector<int>(c));
        int p=0, q=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(q==c)
                {
                    q=0;
                    p++;
                }
                v[p][q] = mat[i][j];
                q++;
            }
        }
        return v;
    }
};