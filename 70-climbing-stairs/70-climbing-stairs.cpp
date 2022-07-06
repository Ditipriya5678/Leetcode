class Solution {
public:
    int climbStairs(int n) {
        int n1=0, n2=1, res;
        for(int i=0;i<n;i++)
        {
            res = n1+n2;
            n1 = n2;
            n2 = res;
        }
        return res;
    }
};