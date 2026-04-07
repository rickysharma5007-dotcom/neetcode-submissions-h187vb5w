class Solution {
 

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::unordered_map<string,std::vector<string>> mp;

        for(auto it: strs)
        {
            std::vector<int> table(26,0);
            for(auto c: it)
                 table[c-'a']++;
             string key;
            for(int i=0;i<26;i++)
            {
                 key+='#';
                 key+= to_string(table[i]);
            }
                mp[key].push_back(it);  
        }
        std::vector<std::vector<string>> res;
        for(auto it : mp)
        {
            res.push_back(it.second);
        }
         return res;
    }
};
