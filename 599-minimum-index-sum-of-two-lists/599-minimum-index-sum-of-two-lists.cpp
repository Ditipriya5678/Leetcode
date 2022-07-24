class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int res = INT_MAX;
        vector<string> v;
        for(int i=0;i<list1.size();i++)
        {
            for(int j=0;j<list2.size();j++)
            {
                if(list1[i]==list2[j] && res > i+j)
                {
                    res = i+j;
                    v.clear();
                    v.push_back(list1[i]);
                    break;
                }
                else if(list1[i]==list2[j] && res==i+j)
                {
                    res = i+j;
                    v.push_back(list1[i]);
                    break;
                }
            }
        }
        return v;
    }
};