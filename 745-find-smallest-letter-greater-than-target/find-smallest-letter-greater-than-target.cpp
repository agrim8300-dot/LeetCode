class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];
        int flag=0;

        for(int i=0 ; i<letters.size() ; i++)
        {
            char ch = letters[i];
            if(!flag)
            {
                if(ch>target)
                {
                    ans = ch;
                    flag=1;
                }
                
            } else{
                if(ch>target && ch<ans) ans = ch;
            }
        }
        return ans;
    }
};