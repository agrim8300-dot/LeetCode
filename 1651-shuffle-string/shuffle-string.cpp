class Solution {
public:
    string restoreString(string s, vector<int>& arr) {
        map<int,char> mp;

        for(int i=0 ; i<arr.size() ; i++)
        {
            mp[arr[i]] = s[i];
        }
    string ans;
        for(auto& x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};