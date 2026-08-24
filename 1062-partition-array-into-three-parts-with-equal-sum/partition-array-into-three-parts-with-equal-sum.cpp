class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n= arr.size();
        int sum=0;
        for(int val:arr)
        {
            sum+=val;
        }
        if(sum%3 != 0)return false;

        int target = sum/3;
        int currsum=0;
        int count=0;
        for(int i=0 ; i<n ;i++)
        {
            currsum+=arr[i];
            if(currsum == target)
            {
                count++;
                currsum=0;
            }
        }
        if(count>=3)return true;
        else return false;
    }
};