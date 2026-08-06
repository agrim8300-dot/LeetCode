class Solution {
public:
    int alternateDigitSum(int n) {
        int neg=0;
        int pos=0;
        int num=n;
        int k=0;
        int sign=0;
        while(num>0)
        {
            k++;
            num/=10;
            sign=num;
        }
        num=n;
        int rem=0;
        for(int i=0;i<=k;i++)
        {
            rem=num%10;
            pos+=rem;
            num/=10;
            rem=0;
            i++;
            rem=num%10;
            neg+=rem;
            num/=10;
        }
        int ans=pos-neg;
        if(k%2==0)
        {
            ans=-ans;
        }
        return ans;
    }
};