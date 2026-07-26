class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int , vector<int> , greater<int>> st; //MinHeap

        for(int i=0 ; i<k ; i++)
        {
            st.push(nums[i]);
        }

        for(int i=k ; i<nums.size() ; i++)
        {
            if(nums[i] > st.top())
            {
                st.pop();
                st.push(nums[i]);
            }
            else{
                continue;
            }
        }
        return st.top();
    }
};