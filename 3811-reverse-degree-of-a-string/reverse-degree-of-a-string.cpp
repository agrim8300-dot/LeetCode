class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mp;
        int val=1;
        for(char ch = 'z' ; ch >='a' ; ch--)
        {
            mp[ch] = val++;
        }
        int sum=0;
        for(int i=0 ; i<s.size() ; i++)
        {
            sum+= (i+1)*(mp[s[i]]);
        }
        
        return sum;
        
    }
};