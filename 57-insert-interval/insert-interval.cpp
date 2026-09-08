class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& newi) {
        bool inserted = false;

        vector<vector<int>>res;

        for(int i=0 ; i<a.size() ; i++)
        {
            if(!inserted && a[i][0] >= newi[0])
            {
                res.push_back(newi);
                inserted = true;
            }
            res.push_back(a[i]);
        }
            if(!inserted)
            {
                res.push_back(newi);
            }
        
        vector<vector<int>> ans;
        //Now merge...
        int start=res[0][0];
        int end = res[0][1];

       for(int i = 1; i < res.size(); i++) {
            if(end >= res[i][0]) {
                end = max(end, res[i][1]);
            } else {
                ans.push_back({start, end});
                start = res[i][0];
                end = res[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
        
    }
};