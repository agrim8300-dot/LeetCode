class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> mp;

        for(int i=0 ; i<score.size() ; i++)
        {
            mp[score[i]] = i;
        }
        vector<string> result(score.size());
        sort(score.begin() , score.end() , greater<int>());

        for(int i=0 ; i<score.size() ; i++)
        {
            int idx = mp[score[i]];

            if (i == 0) {
                result[idx] = "Gold Medal";
            }
            else if (i == 1) {
                result[idx] = "Silver Medal";
            }
            else if (i == 2) {
                result[idx] = "Bronze Medal";
            }
            else {
                result[idx] = to_string(i + 1);
            }
        }
         return result;
        }
       
    };
