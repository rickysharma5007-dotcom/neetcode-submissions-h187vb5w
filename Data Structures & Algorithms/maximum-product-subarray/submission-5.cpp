class Solution {
public:
    int maxProduct(vector<int>& nums) {
int prefix=1,p=0;
int suffix=1,s=nums.size()-1;
int maxi=INT_MIN;

while(p<nums.size()&&s>=0)
{
    if(prefix==0) prefix=1;
    if(suffix==0)suffix=1;
  prefix*=nums[p];
  suffix*=nums[s];
  
maxi=std::max(maxi,std::max(prefix,suffix));
p++;s--;
}
return maxi;

       
        
    }
};
