class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans;
        for(int val:nums)
        {
            mp[val]++;
        }

        for(auto it:mp)
        {
            if(it.second == 1)
            {
                ans =  it.first;
            }
        }
        return ans;
    }
};