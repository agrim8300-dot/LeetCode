class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int n = arr.size();
        int ans=0;
        int maxi=0;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<arr[0].size() ; j++)
            {
                ans += arr[i][j];
            }
            maxi = max(ans,maxi);
            ans=0;
        }
        return maxi;
    }
};