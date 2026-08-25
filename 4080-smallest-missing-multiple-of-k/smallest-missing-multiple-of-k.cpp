class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> st;
        for(int val:nums)
        {
            st.insert(val);
        }
        int i=k;
        
        while(true)
        {
            if(st.find(i) == st.end())
            {
                return i;
            }
            i+=k;
        }
        
    }
};