class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans(arr.size());

        for(int i =0 ; i<arr.size() ; i++)
        {
            ans[i] = arr[i];
        }
        sort(ans.begin(),ans.end());

        int rank =1;
        unordered_map<int,int> mp;

        for(int i=0 ; i<ans.size() ;i++ )
        {
            if(mp.find(ans[i]) == mp.end())
            {
                mp[ans[i]] = rank;
                rank++;
            }
        }

        for(int i=0 ; i<ans.size() ; i++)
        {
            arr[i] = mp[arr[i]];
        }
    return arr;
    }
};