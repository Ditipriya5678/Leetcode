class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i=0;i<numRows;i++)
        {
            vector<int> v1;
            v.push_back(v1);
            
            for(int j=0;j<i+1;j++)
            {
                if(j==0 || j==i)
                {
                    v[i].push_back(1);
                }
                else
                {
                    v[i].push_back(v[i-1][j-1] + v[i-1][j]);
                }
            }
        }
        return v;
    }
};