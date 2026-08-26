class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int>mp;

        string row1 = "qwertyuiopQWERTYUIOP";
        string row2 = "asdfghjklASDFGHJKL";
        string row3 = "zxcvbnmZXCVBNM";

        for(char ch:row1)
        {
            mp[ch]=1;
        }
        for(char ch:row2)
        {
            mp[ch]=2;
        }
        for(char ch:row3)
        {
            mp[ch]=3;
        }
        vector<string>ans;
        for(string str:words)
        {
            bool flag=true;
            int rowno = mp[str[0]];
            for(char ch:str)
            {
                if(mp[ch] != rowno)
                {
                    flag=false;
                    break;
                }
            }
            if(flag) ans.push_back(str);
        }
        return ans;
    }
};