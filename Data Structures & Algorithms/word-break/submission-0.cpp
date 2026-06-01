class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        std::vector<bool> dp(s.length()+1,false);
         dp[s.length()]=true;
         for(int i=s.length();i>=0;i--)
         {
            for(auto &it:wordDict)
            {
                if(i+it.size()<=s.length()&&
                  s.substr(i,it.size())==it)
                        {
                       dp[i]=dp[i+it.size()];
                        }
                if(dp[i]) break;
            }

         }
             return dp[0];
    }

};
