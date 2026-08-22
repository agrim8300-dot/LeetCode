class Solution {
public:
    int elevatorRequests(int n, vector<int>& arr) {
        int time=0;
        int prev=0;
        for(int i=0 ; i<arr.size();i++)
        {
            time+=abs(arr[i]-prev);
            prev = arr[i];
        }
        return time;
    }
};