class Solution {
public:
    int tribonacci(int n) {
        if(n<=1)
            return n;
        vector<int> v(n+1,0);
        v[0]=0, v[1]=1, v[2]=1;
        for(int i=3;i<=n;i++)
        {
            v[i] = v[i-1] + v[i-2] + v[i-3];
        }
        return v[n];
    }
};