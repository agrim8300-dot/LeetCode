class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n);
        vector<int> right(n);
        stack<int> st;
        for(int i=0 ; i<n ; i++)//for prev smaller
        {
            while(!st.empty()  && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if(st.empty()) left[i] = -1;
            else{
                left[i] = st.top();
            }
            st.push(i);
        }


        while(!st.empty()) st.pop();

        for(int i=n-1 ; i>=0 ; i--)//Logic for next smaller
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if(st.empty()) right[i] = n;
            else{
                right[i] = st.top();
            }
            st.push(i);
        }

        
        int area , maxArea = 0;
        for(int i=0 ; i<n ; i++) //calc max area..
        {
            area = arr[i] * (right[i]-left[i]-1);
            maxArea = max(area , maxArea);
        }
        return maxArea;
    }
};