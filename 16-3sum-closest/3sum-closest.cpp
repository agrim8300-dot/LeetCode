class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int res=0;
        int diff = INT_MAX;
      
        for(int i=0 ; i<n-2 ; i++)
        {
            int left = i+1;
            int right = n-1;
          
            while( left < right )
            {
                int total = nums[i] + nums[left] + nums[right];
                int d = target - total;
                if( abs(d) < abs(diff))
                {
                    diff = d;
                    res = total;
                }

                if(total == target)
                {
                    return res;
                } 
                else if(total < target)
                {
                    left++;
                }else
                {
                    right--;
                }
            }
        }
        return res;

    }
};