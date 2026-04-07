class Solution {
public:
    std::vector<vector<int>> result;
    vector<vector<int>> subsets(vector<int>& nums) {
    
        std::vector<int> curr;
       
        recursive(nums,curr,0);
         return result;
        
    }
    void recursive (std::vector<int>&nums,std::vector<int>&curr,int inx)
    {
         if( inx>=nums.size())
         {
          result.push_back(curr);
          return ;
         }
          

          curr.push_back(nums[inx]);
        recursive(nums,curr,inx+1);
        curr.pop_back();
        recursive(nums,curr,inx+1);


    }
};
