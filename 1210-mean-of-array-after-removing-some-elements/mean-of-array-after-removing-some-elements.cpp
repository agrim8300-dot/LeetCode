class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int k = 0.05*n;

        sort(arr.begin() ,arr.end());
        for(int i=0 ; i<k ; i++)
        {
            arr.erase(arr.begin());
        }

        for(int i=0 ; i<k ; i++)
        {
            arr.erase(arr.end());
        }
        // if(n == 0) return 0;
        // else if(n == 1) return arr[n];

        double avg=0;
        double sum=0 ; 
        for(int i=0 ; i<arr.size() ; i++)
        {
            sum+=arr[i];
        }
        avg = double(sum)/arr.size();
        return avg;
    }
};