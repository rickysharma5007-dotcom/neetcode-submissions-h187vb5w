class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int maxi=0;
        std::unordered_set<char>st;
       for(int r=0;r<s.length();r++)
       {
       while(st.count(s[r]))
       {
           st.erase(s[l]);
           l++;
       }
       st.insert(s[r]);
       maxi=std::max(maxi,r-l+1);
       }
          return maxi;
    }
 

};
