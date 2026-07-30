class Solution {
public:
    int minimumPushes(string word) {
        int cnt=0;
        for(int i=0 ; i<word.size() ; i++)
        {
            if(i <8){
                cnt+=1;
            }
            else if(i < 16)
            {
                cnt+=2;
            }
            else if(i<24)
            {
                cnt+=3;
            }
            else{
                cnt+=4;
            }
        }
        return cnt;
    }
};