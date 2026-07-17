class Solution {
public:
    int getSum(int a, int b) {
        int count=0;

        if(a < 0)
        {
            for(int i=0 ; i<abs(a) ; i++)
            {
                count--;
            }
        }
            else {
                for(int i=0 ; i<a ; i++)
                {
                    count++;
                }
            }
             if(b < 0)
            {
                for(int j=0 ; j<abs(b) ; j++)
                {
                    count--;
                }
            }
            else {
    
                for(int k=0 ; k<b ; k++)
                {
                    count++;
                }
            }
        
        return count;
    }
};