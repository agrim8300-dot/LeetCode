class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        
        vector<char>copy;
        
        for(int i=0 ; i<s.size() ; i++)
        {
            if(mp.find(s[i]) == mp.end())
            {
                copy.push_back(s[i]);
            }
            mp[s[i]]++;
        }

        /*Bubble sort to sort the "copy" by decreasing order of their
        frequencies,*/
        int n1 = copy.size();
        for(int i=0 ; i<n1-1 ; i++)
        {
            bool flag = true;
            for(int j=0 ; j<n1-i-1 ; j++)
            {
                if(mp[copy[j]] > mp[copy[j+1]]) //comparing freqs
                {
                    flag = false;
                    swap(copy[j] , copy[j+1]); // swapping the unique arr   
                }
            }
            if(flag == true) break;
        }

        string ans;
        int idx = n1-1;
        while(idx>=0)
        {
            while(mp[copy[idx]]--)
            ans.push_back(copy[idx]);
            
            idx--;
        }
        return ans;
    }
};