class Solution {
public:
    int sum(int num)
    {
        int ans=0;
        while(num>0)
        {
            int digit = num % 10;
            ans = ans+digit;
            num = num/10;
        }
        return ans;
    }

    int prod(int num)
    {
        int ans=1;
        while(num>1)
        {
            int digit = num % 10;
            ans = ans*digit;
            num = num/10;
        }
        return ans;
    }
    bool checkDivisibility(int n) {
        int final = sum(n)+prod(n);
        if(n % final == 0)return true;
        else return false;
    }
};