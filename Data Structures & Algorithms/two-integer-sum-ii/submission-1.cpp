class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       {
         std::unordered_map<int,int>mp;
        std::vector<int> res;
        for(int i=0;i<numbers.size();i++)
        {
            int rem=target-numbers[i];
            if(mp.find(rem)==mp.end())
            {
                mp[numbers[i]]=i;
            }
            else
            {
                res.push_back(mp[rem]+1);
                res.push_back(i+1);

            }
        }
        return res;
       }
    }
};
