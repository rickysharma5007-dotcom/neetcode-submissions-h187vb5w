class Solution {
public:
    bool hasDuplicate(vector<int>& num) {
        std::unordered_map<int,int> freq;
        for(int i=0;i<num.size();i++)
        {
          if(freq[num[i]]>0) return true;
          else
          freq[num[i]]++;
        }
        return false;
    }
};