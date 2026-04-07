class Solution {
public:

    vector<vector<int>> permute(vector<int>& nums) {
       if(nums.size()==0) return {{}};

   std::vector<int> remaining(nums.begin()+1,nums.end());
   std::vector<std::vector<int>>perms= permute(remaining);
    
     std::vector<std::vector<int>> res;
      
      for(auto&p:perms)
      {
      for(int i=0;i<=p.size();i++)
      {
          std::vector<int>copy=p;
          copy.insert(copy.begin()+i,nums[0]);
          res.push_back(copy);
      }
      }
      return res;
   


    }
};
