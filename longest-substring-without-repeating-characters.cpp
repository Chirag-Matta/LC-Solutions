class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        map<char, int> m;
        int maxLength = 0;
        int left = 0;

        for (int right = 0; right < s.size(); ++right) {
            if (m.find(s[right]) != m.end() && m[s[right]] >= left) {
                left = m[s[right]] + 1;
            }
            m[s[right]] = right;
            maxLength = std::max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
