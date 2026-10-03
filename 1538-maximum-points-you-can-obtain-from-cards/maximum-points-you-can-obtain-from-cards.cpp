class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int lsum=0;
        int maxsum=0;
        for(int i=0;i<k;i++)
        {
            lsum+=arr[i];
        }
        maxsum = lsum;
        int n=arr.size();
        int right_i = n-1;
        int rsum=0;
        for(int i=k-1 ; i>=0; i--)
        {
            lsum -= arr[i];
            rsum+=arr[right_i];
            right_i--;
            maxsum = max(maxsum , lsum+rsum);
        }
        return maxsum;
    }
};