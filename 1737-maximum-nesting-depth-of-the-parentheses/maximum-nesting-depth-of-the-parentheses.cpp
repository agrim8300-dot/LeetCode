class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxi=0;

        for(auto it:s)
        {
            if(it == '('){
            count++;
            
            if(count>maxi)
            {
                maxi =  count;
            }
            }
            
            else if(it == ')') count--;
            else continue;
        }
        return maxi;
    }
};