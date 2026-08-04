class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=0;
        int mini=INT_MAX;
        set<int> st;
        for(int i=0 ; i<nums.size() ; i++)
        {
            st.insert(nums[i]);
        }
        for(int i=0 ; i<nums.size() ; i++)
        {
            maxi = max(maxi,nums[i]);
            mini = min(mini, nums[i]);
        }
        vector<int>ans;
        for(int i=mini+1 ; i<maxi ; i++)
        {
            if(st.find(i) != st.end())
            {
                continue;
            }else ans.push_back(i);
        }
        return ans;
    }
};