class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int>mp;
        std::vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            int rem=target-nums[i];
            if(mp.find(rem)==mp.end())
            {
                mp[nums[i]]=i;
            }
            else
            {
                res.push_back(mp[rem]);
                res.push_back(i);

            }
        }
        return res;

    }

};