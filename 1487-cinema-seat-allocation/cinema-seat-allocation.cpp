class Solution {
public:
 bool isAvailable(unordered_set<int>& bookedSeats, int start, int end) {
        for (int seat = start; seat <= end; seat++) {
            if (bookedSeats.find(seat) != bookedSeats.end())
                return false;
        }
        return true;
    }
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int, unordered_set<int>> mp;
        for (auto& reservedSeat : reservedSeats) {
            int row = reservedSeat[0];
            int seat = reservedSeat[1];

            mp[row].insert(seat);
        }  
        int result = (n - mp.size()) * 2;

        for (auto& [row, bookedSeats] : mp) {// shorter form ( structrued binding,)

            bool groupA = isAvailable(bookedSeats, 2, 5);
            bool groupB = isAvailable(bookedSeats, 4, 7);
            bool groupC = isAvailable(bookedSeats, 6, 9);

            if (groupA && groupC)
                result += 2;

            else if (groupA || groupB || groupC)
                result += 1;
        }

        return result;
    }
};