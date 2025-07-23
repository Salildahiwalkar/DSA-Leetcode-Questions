class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int perfixSum = 0, cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            perfixSum += nums[i];
            int remove = perfixSum - k;
            cnt += mpp[remove];
            mpp[perfixSum] += 1;
        }

        return cnt;
    }
};