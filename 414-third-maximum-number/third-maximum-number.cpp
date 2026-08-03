class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        for(auto& x: nums)
        {
            st.insert(x);
            if(st.size() > 3)
        {
            st.erase(st.begin());
        }
        
        }

        
        if(st.size() == 3)
        {
            return *st.begin();
        }
        else{
            return *st.rbegin();
        }
        
    }
};