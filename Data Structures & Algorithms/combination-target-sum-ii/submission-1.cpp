class Solution {
public:
std::vector<std::vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        std::vector<int>curr;
        std::sort(candidates.begin(), candidates.end());
        dfs(candidates,target,0,curr);
        return res;
    }
 void dfs(std::vector<int>&candidates,int target,int inx,std::vector<int>& curr)
{
 if(target==0)
 {
    res.push_back(curr);
    return;
 }
 if( target<0|| inx>=candidates.size()) return;
 curr.push_back(candidates[inx]);
 dfs(candidates,target-candidates[inx],inx+1,curr);
 curr.pop_back();
 while(inx+1<candidates.size()&& candidates[inx]==candidates[inx+1])
 {
    inx++;
 }
  dfs(candidates,target,inx+1,curr);

}
};
