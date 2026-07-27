class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string, int> mp;
        for (string word : words) {
            mp[word]++;
        }

        vector<pair<string, int>> arr;

        for (auto it : mp) {
            arr.push_back(it);
        }

        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {

                bool Swap = false;

                //freq,check
                if (arr[j].second < arr[j + 1].second) {
                    Swap = true;
                }
                // alpha chk, (ascii values)
                else if (arr[j].second == arr[j + 1].second &&
                     arr[j].first > arr[j + 1].first) {
                    Swap = true;
                }

                if (Swap) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        vector<string> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};