class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start=0;
        int end = arr.size()-1;
        vector<int> ans;
        while(end-start+1 > k)
        {
            if(abs(arr[start]-x) > abs(arr[end]-x))
            {
                
                start++;
            }
            else{
                
                end--;
            }
        }
        for(int i=start ; i<=end ; i++)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};