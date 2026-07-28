class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> heap;

        for(auto it : points)
        {
            int dist = it[0]*it[0] + it[1]*it[1];
            if(heap.size() >= k)
            {
                if(heap.top().first > dist)
                {
                    heap.pop();
                    heap.push({dist, it});
                }
            }
            else
            {
                heap.push({dist, it});
            }
        }
        
        vector<vector<int>> ans;
        while(!heap.empty())
        {
            ans.push_back(heap.top().second);
            heap.pop();
        }
        return ans;
    }
};