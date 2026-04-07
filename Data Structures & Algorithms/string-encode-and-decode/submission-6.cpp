class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
      for(auto it:strs)
      {
      encoded+= to_string(it.size())+"#"+it;
      }
      return encoded;
    }

    vector<string> decode(string s) {
        {
            std::vector<string> res;
            int i=0;
         while(i<s.size())
         {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int length= stoi(s.substr(i,j-i));
            i=j+1;
            res.push_back(s.substr(i,length));
            i+=length;
         }
           
    
            return res;
        }
    

    }
};
