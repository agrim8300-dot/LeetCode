class Solution {
public:
    int prod(int num)
    {
        if(num == 0) return 0;
        int ans=1;
        while(num>1){
        int digit = num%10;
        num = num/10;
        ans  = ans*digit; 

        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        int lol;
        for(int i=n ; i<100 ; i++)
        {
            if(prod(i) % t == 0) {
                lol=i;
                break;
            }
            else continue;
        }
        return lol;
    }
};