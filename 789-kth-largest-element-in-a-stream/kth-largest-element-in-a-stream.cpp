class KthLargest {
public:
    priority_queue<int , vector<int> , greater<int>> st;
    int K;
    KthLargest(int k, vector<int>& nums) {
        K =k;
        for(auto& ele : nums )
        {
            st.push(ele);
            if(st.size() > K) st.pop();
        }
    }
    
    int add(int val) {
        st.push(val);

        if(st.size() > K) st.pop();

        return st.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */