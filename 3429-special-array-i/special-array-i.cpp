class Solution {
public:
    string parity(int n) {
        if (n % 2 == 0)
            return "even";
        else
            return "odd";
    }
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (parity(nums[i]) == parity(nums[i - 1]))
                return false;
        }

        return true;
    }
};