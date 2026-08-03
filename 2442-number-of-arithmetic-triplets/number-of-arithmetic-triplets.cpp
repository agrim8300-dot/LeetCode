class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> set(nums.begin(),nums.end());
        int count=0;
        for(auto& x:nums)
        {
            if( set.count(x+diff) &&    set.count(x+2*diff) ){
                count++;
            }
        }
        return count;
    }
};