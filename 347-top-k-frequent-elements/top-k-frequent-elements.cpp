class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int i=0 ; i<nums.size() ; i++)
        {
            mp[nums[i]]++;
        }

        priority_queue<pair<int,int>> heap;

        for(auto& it: mp)
        {
            heap.push({it.second,it.first});
        }
        vector<int>ans;
        while(k--)
        {
            ans.push_back(heap.top().second);
            heap.pop();
        }
        return ans;
    }
};