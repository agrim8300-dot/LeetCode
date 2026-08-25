class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> mp; //row no. , string of each row..(qwerty)
        
        string row1 = "qwertyuiopQWERTYUIOP";
        string row2 = "asdfghjklASDFGHJKL";
        string row3 = "zxcvbnmZXCVBNM";

        for(char c:row1)
        {
            mp[c] = 1;
        }
        for(char c:row2)
        {
            mp[c] = 2;
        }
        for(char c:row3)
        {
            mp[c] = 3;
        }
        vector<string>ans;

        for(string &st:words)
        {
            int alpha = mp[st[0]];
            bool flag=true;
            for(char &ch: st)
            {
                if(mp[ch] != alpha)
                {
                    flag=false;
                    break;
                }
            }
            if(flag) ans.push_back(st);
        }
        // for(int i=0 ; i<words.size() ; i++)
        // {
        //     for(int j=0; j<words[i].size() ; j++)
        //     {
        //         if(mp.find(words[i][j]) == mp.end())
        //     }
        // }
        return ans;
    }
};