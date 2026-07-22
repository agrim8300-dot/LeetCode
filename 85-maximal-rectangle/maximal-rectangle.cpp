class Solution {
public:
    int maxhist(vector<int>& arr)
    {
        int n = arr.size();
        stack<int> st;
        vector<int> left(n);//for prefix sum
        vector<int> right(n);//fir suffix sum

        //logic for previous smaller
        for(int i=0 ; i<n ; i++)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if(st.empty()) left[i] = -1;
            else {left[i] = st.top();}

            st.push(i);
        }
        

        while(!st.empty()){
            st.pop();
        }

        //logic for next smaller
        for(int i=n-1 ; i>=0 ; i--)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if(st.empty()) right[i] = n;
            else {
            right[i] = st.top();
            }
            st.push(i);
        }
        int maxArea = 0;
        int area=0;

        for(int i=0 ; i<n ; i++)
        {
            area = arr[i] * (right[i] - left[i] - 1);
            maxArea = max(maxArea ,area);
        }

        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        if(matrix.empty()) return 0;

        vector<int>height(m);
        int mxArea = 0;
        for(auto& row : matrix)
        {
            for(int i=0 ; i<m ; i++)
            {
                if(row[i] == '1') height[i]++;
                else height[i] = 0;
            }
            mxArea = max(mxArea , maxhist(height));
        }
        return mxArea;
    }
};