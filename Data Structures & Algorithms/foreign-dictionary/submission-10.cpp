#include <vector>
#include <string>
#include <unordered_set>
#include <queue>
using namespace std;

class Solution {
public:
    string foreignDictionary(vector<string>& words) {

        vector<unordered_set<int>> adj(26);
        vector<bool> present(26,false);
        vector<int> indegree(26,0);

    
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                present[words[i][j]-'a']=true;
            }
        }

        // build graph
        for(int i=0;i+1<words.size();i++)
        {
            string w1=words[i];
            string w2=words[i+1];

            // invalid prefix case
            if(w1.length()>w2.length() && w1.substr(0,w2.length())==w2)
                return "";

            int len=min(w1.length(),w2.length());

            for(int j=0;j<len;j++)
            {
                if(w1[j]!=w2[j])
                {
                    int u=w1[j]-'a';
                    int v=w2[j]-'a';

                    if(adj[u].find(v)==adj[u].end())
                    {
                        adj[u].insert(v);
                        indegree[v]++;
                    }
                    break;
                }
            }
        }

        queue<int> q;

        for(int i=0;i<26;i++)
        {
            if(present[i] && indegree[i]==0)
                q.push(i);
        }

        string ans="";

        while(!q.empty())
        {
            int node=q.front();
            q.pop();

            ans+=node+'a';

            for(auto it=adj[node].begin(); it!=adj[node].end(); it++)
            {
                int neigh=*it;

                indegree[neigh]--;

                if(indegree[neigh]==0)
                    q.push(neigh);
            }
        }

        
        int count=0;
        for(int i=0;i<26;i++)
            if(present[i]) count++;

        if(ans.size()!=count)
            return "";

        return ans;
    }
};