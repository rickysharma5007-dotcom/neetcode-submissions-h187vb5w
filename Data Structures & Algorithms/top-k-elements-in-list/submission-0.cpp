class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;

    
        for (int x : nums) {
            freq[x]++;
        }

  
        vector<vector<int>> buckets(nums.size() + 1);

        for (auto& p : freq) {
            int val = p.first;
            int count = p.second;

            buckets[count].push_back(val);
        }

       
        vector<int> result;

        for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
            for (int x : buckets[i]) {
                result.push_back(x);

                if (result.size() == k)
                    break;
            }
        }

        return result;
    }


        
    
};
