class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        int sum=0;
        int left=0;
        int right = k-1;
        for(int i=0 ; i<k ; i++)
        {
            sum+=nums[i];
        }
        int maxsum=sum;
        while(right < nums.size()-1)
        {
            sum-=nums[left];
            left++;
            right++;
            sum+=nums[right];

            maxsum = max(maxsum,sum);
        }
        return (double)maxsum/(double)k;
    }
};