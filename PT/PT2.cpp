//Pascal's Triangle II
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vals;

        vals.resize(rowIndex + 1, 1);

        for(int i = 0; i < rowIndex + 1; i++) {
            for(int j = i - 1; j > 0; j--) {
                vals[j] = vals[j] + vals[j - 1];
            }

        }

        return vals;
    }
};
