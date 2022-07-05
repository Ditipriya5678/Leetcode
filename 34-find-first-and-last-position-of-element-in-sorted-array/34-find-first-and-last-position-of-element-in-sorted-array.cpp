class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int i=0, j=n-1, k=0;
        while(i<=j)
        {
            if(nums[i]==target && nums[j]==target)
            {
                k+=1;
                break;
            }
            else if(nums[i]==target && nums[j]!=target)
                j--;
            else if(nums[i]!=target && nums[j]==target)
                i++;
            else
            {
                i++;
                j--;
            }
        }
        vector<int> v;
        if(k==0)
        {
           v.push_back(-1); 
           v.push_back(-1); 
        }
        else
        {
            v.push_back(i);
            v.push_back(j); 
        }
        return v;
    }
};