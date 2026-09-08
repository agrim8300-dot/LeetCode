class Solution {
public:
    int candy(vector<int>& arr) {
        vector<int>left(arr.size(),1);
        vector<int>right(arr.size(),1);

        for(int i=1; i<arr.size() ; i++)
        {
            if(arr[i] > arr[i-1])
            {
                left[i] = left[i-1] + 1;
            }
        }

        for(int i=arr.size()-2 ; i>=0 ; i--)
        {
            if(arr[i] > arr[i+1])
            {
                right[i] = right[i+1] +1 ;
            }
        }
        int ans=0;
        for(int i=0 ; i<arr.size() ; i++)
        {
            ans += max(left[i],right[i]);
        }
        return ans;
    }
};