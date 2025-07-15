class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n - 1;
        int cnt = 0;
        while (s[i] == ' ')
            i -= 1;

        for (int j = 0; j <= i; j++) {
            if (s[j] != ' ') {
                cnt += 1;
            } else
                cnt = 0;
        }
        return cnt;
    }
};