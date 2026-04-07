class Solution {
public:
    int rob(vector<int>& nums) {
            int n = nums.size();
        
        if (n == 1) return nums[0];
       return std::max(it(vector<int>(nums.begin(),nums.end()-1)),
                       it(vector<int>(nums.begin()+1,nums.end())));
        
    }
    int it(std::vector<int>nums)
    {
         int n = nums.size();
        
        if (n == 1) return nums[0];
        std::vector<int> dp(nums.size(),0);
        dp[0]=nums[0];
       dp[1]=std::max(nums[0],nums[1]);
       for(int i=2;i<nums.size();i++)
       {
        dp[i]=std::max(dp[i-1],nums[i]+dp[i-2]);
       }

       return dp.back();

    }
};
