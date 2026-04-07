class Solution {
public:
      std::vector<std::vector<int>> result;
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        std::vector<int> curr;
        dfs(nums,target,curr,0);
        return result;

    }
  void dfs(std::vector<int>&nums,int target,std::vector<int>&curr,int i)
    {
        if(target==0) {
            result.push_back(curr);
            return ;
            }
         if(target<0) return ;
        if(i>=nums.size()) return ;

     
      curr.push_back(nums[i]);
       dfs(nums,target-nums[i],curr,i);
       curr.pop_back();
       dfs(nums,target,curr,i+1);


         

    }


};
