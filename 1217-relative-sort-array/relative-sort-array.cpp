class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        set<int> st;
        for(int x : arr1)
        {
            mp[x]++;
            st.insert(x);
        }
        vector<int> ans;

        for(int x : arr2)
        {
            while(mp[x] > 0)
            {
                ans.push_back(x);
                mp[x]--;
                st.erase(x);
                
            }
        }

        for (int x : st) {
            while (mp[x] > 0) {
                ans.push_back(x);
                mp[x]--;
            }
        }

        return ans;
    }
};