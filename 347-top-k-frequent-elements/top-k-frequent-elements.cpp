class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int> mp;
        vector<int> copy;
        
        vector<int>ans;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                copy.push_back(nums[i]);
            }
            mp[nums[i]]++;
        }
        int n=copy.size();
        //bubble sort to sort the frequencies in decreasing order
        for(int i=0 ; i<n-1 ; i++)
        {
            bool flag = true;
            for(int j=0 ; j<n-i-1 ; j++)
            {
                if(mp[copy[j]] > mp[copy[j+1]])
                {
                    flag = false;
                    swap(copy[j],copy[j+1]);
                }
                
            }
            if(flag) break;
        }
            int val=0;
            int idx = n-1;
            while(val < k)
            {
                ans.push_back(copy[idx]);
                idx--;
                val++;
            }
        
        return ans;
    }
};