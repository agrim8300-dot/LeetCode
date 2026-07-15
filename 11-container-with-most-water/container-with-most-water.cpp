class Solution {
public:
    int maxArea(vector<int>& arr) {
        int left = 0;
        int right = arr.size()- 1;
        int maxarea = 0;
        while(left < right)
        {
            int breadth = right-left;
            int length = min(arr[left] , arr[right]);
            int area = length*breadth;
            maxarea = max(area,maxarea);

            if(arr[left] < arr[right])
            {
                left++;
            }
            else right--;
        }
        return maxarea;
    }
};