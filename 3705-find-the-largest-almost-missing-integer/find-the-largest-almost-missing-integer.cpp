class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi=INT_MIN;
        int windowsize = k;
        unordered_map<int,int>mp;

        for(int i=0 ; i<n ; i++)
        {
            maxi = max(maxi,nums[i]);
        }
        if(n == k)return maxi;

    for(int i = 0; i + k <= n; i++) {
        int idx = i;
        int kIdx = 0;

       while(kIdx < windowsize) {
        mp[nums[idx]]++;
        kIdx++;
        idx++;
    }
}
    int finalans=-1;
        for(auto it:mp)
        {
            if(it.second == 1)
            {
                finalans = max(finalans,it.first);
            }
        }
        return finalans;

    }
};