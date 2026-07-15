class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        vector<int> odd;
       
        int nums = 1;

        for(int i=0 ; i<n ; i++)
        {
            odd.push_back(nums);
            nums+=2;
        }        
        int sum1=0;
        for(int i=0 ; i<odd.size() ; i++)
        {
            sum1+=odd[i];
        }

        vector<int> even;
        int nums2 = 2;

        for(int i=0 ; i<n ; i++)
        {
            even.push_back(nums2);
            nums2+=2;
        }

        int sum2=0;
        for(int i=0  ; i<even.size() ; i++)
        {
            sum2+=even[i];
        }

        return gcd(sum1 , sum2);

        }
    
};