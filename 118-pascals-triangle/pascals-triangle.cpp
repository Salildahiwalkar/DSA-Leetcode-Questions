class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for (int i = 1; i <= n; i++) {
            ans.push_back(genreateRow(i));
        }
        return ans;
    }
    vector<int> genreateRow(int row) {
        vector<int> ansRow;
        long long ans = 1;
        ansRow.push_back(1);
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
};