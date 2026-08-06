class Solution {
public:
    int alternateDigitSum(int n) {
        
        int pos=0;
        int neg=0;
        int count=0;
        int temp=n;
        while(temp>0)
        {
            count++;
            temp = temp/10;
        }
        temp=n;
        int rem=0;
        for(int i=0 ; i<=count ; i++)
        {
            rem = temp%10;
            pos = pos+rem;
            temp = temp/10;
            rem=0;
            
            rem = temp%10;
            neg = neg+rem;
            temp = temp/10;
        }

        int ans=pos -neg;
        if(count % 2 == 0)
        {
            ans = -ans;
        }
        return ans;
    }
};