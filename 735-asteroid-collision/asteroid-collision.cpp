class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int x : asteroids) {

            while (!st.empty() && st.top() > 0 && x < 0) {

                if (abs(st.top()) < abs(x)) {
                    st.pop();             
                    continue;             
                }
                else if (abs(st.top()) == abs(x)) {
                    st.pop();              // Both explode
                }

                x = 0;                     // Current asteroid is destroyed
                break;
            }

            if (x != 0)
                st.push(x);
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};