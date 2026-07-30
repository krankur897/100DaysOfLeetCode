// LeetCode 1207 - Unique Number of Occurrences
// Approach:
// 1. Store frequency of each number using a fixed-size array (range: -1000 to 1000).
// 2. Sort the frequency array.
// 3. If any non-zero frequency appears twice, return false.
// Time Complexity: O(n + 2001 log 2001)
// Space Complexity: O(2001)


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        vector<int> freq(2001, 0);

        // Frequency count
        for (int x : arr) {
            freq[x + 1000]++;
        }

        // Frequency array sort
        sort(freq.begin(), freq.end());

        // Duplicate frequency check
        for (int i = 1; i < 2001; i++) {
            if (freq[i] != 0 && freq[i] == freq[i - 1]) {
                return false;
            }
        }

        return true;
    }
};







