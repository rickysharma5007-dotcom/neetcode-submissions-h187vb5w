class Solution {
public:
    int countSubstrings(string s) {
        int res=0;
        for(int i=0;i<s.length();i++)
        {
          int l=i,r=i;
          while(s[l]==s[r]&&l>=0&&r<s.length())
          {
            res++;
            l--;
            r++;
          }
            l=i,r=i+1;
             while(s[l]==s[r]&&l>=0&&r<s.length())
          {
            res++;
            l--;
            r++;
          }
        }

      return res;

        
    }
};
