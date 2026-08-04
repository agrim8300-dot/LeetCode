class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums)
        {
            mp[x]++;
        }
        int mini=INT_MAX;
        int maxi = 0;
        for(int x:nums)
        {
            maxi = max(maxi,x);
            mini = min(mini,x);
        }
        vector<int>ans;
        for(int i = mini+1 ; i<maxi ; i++)
        {
            if(mp.find(i) != mp.end())
            {
                continue;
            }else{
                ans.push_back(i);
            }
        }
        return ans;
    }
};