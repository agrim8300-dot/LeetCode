class Solution {
public:
    int trap(vector<int>& arr) {
        int left=0;
        int right = arr.size()-1;

        int lmax=0 , rmax=0 , ans=0;

        while(left < right)
        {
            lmax = max(lmax , arr[left]);
            rmax = max(rmax , arr[right]);

            if(lmax < rmax)//left bar is the deciding factor..
            {
                ans = ans+(lmax - arr[left]);
                left++;
            }else{//right bar is the deciding factor

            ans+= rmax-arr[right];
            right--;
            }

        }
        return ans;
    }
};