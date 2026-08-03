class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, int> mp;

        for(int x: nums)
        {
            mp[x]++;
        }
        int count=0;

        for(int x:nums)
        {
            if(mp.find(x+diff) != mp.end() && mp.find(x+2*diff)!= mp.end())
            {
                count++;
            }
        }
        return count;
    }
};