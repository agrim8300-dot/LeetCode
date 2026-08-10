class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        sort(s.begin(),s.end());
        sort(g.begin() , g.end());
        int n = g.size(),m=s.size();
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(g[i] > s[j])
            {
                j++;
            }else
            {
                count++;
                i++;
                j++;
            }
        }
        return count;
    }
};