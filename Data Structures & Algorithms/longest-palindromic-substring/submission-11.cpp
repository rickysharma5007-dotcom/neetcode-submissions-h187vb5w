class Solution {
public:
    string longestPalindrome(string s) {
        int len=0;
        int slength=0;
        for(int i=0;i<s.length();i++)
        {
            //odd
           int l=i,r=i;
            while(s[l]==s[r]&& l>=0&&r<s.length())
            {
                    if(r-l+1>len)
                    {
                        slength=l;
                        len=r-l+1;
                    }
                    l--;
                    r++;
            }
//even
             l=i;
             r=i+1;
               while(s[l]==s[r]&& l>=0&&r<s.length())
            {
                    if(r-l+1>len)
                    {
                        slength=l;
                        len=r-l+1;
                    }
                    l--;
                    r++;
            }
            
        }
        return s.substr(slength,len);
    }
};
