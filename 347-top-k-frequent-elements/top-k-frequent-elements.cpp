class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> ans;
        vector<int> copy;
        
        
        for(int i = 0; i < nums.size(); i++)  
        {
            if(m.find(nums[i]) == m.end()){
                copy.push_back(nums[i]);
                m[nums[i]] = 0;
            }
            m[nums[i]]++; 
        }
         int n = copy.size();
        for(int i = 0; i < n - 1; i++){ // m - 1 iter.. har iter.. pe ek elem sort.
            bool flag = true;
            for(int j = 0; j < n - i - 1; j++){ // total comparison , decre.. starting with m - 1;
                if(m[copy[j]] > m[copy[j + 1]]){ // customization.
                    flag = false;
                    swap(copy[j] , copy[j + 1]);
                }
            }
            if(flag == true){
                break;
            }
        }
        int val = 0;
        int idx = n - 1;
        while(val < k){
          ans.push_back(copy[idx]);
          idx--;
          val++;
        }
        
        return ans;
    }
};