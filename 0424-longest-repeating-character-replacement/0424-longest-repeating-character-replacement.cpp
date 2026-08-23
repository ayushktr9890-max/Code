class Solution {
public:
    int characterReplacement(string s, int k) {

        // Frequency array to store count of characters
        int freq[26] = {0};

        int left = 0;
        int MaxFreq = 0;
        int maxWindow = 0;

        // Now traverse the right pointer
        for (int right = 0; right < s.size(); right++) {

            // Increase the frequency of the current character
            freq[s[right] - 'A']++;

            // Update the maximum frequency
            MaxFreq = max(MaxFreq, freq[s[right] - 'A']);

            // Window size
            int windowLength = right - left + 1;

            // If replacements required are greater than k,
            // shrink the window from the left
            while (windowLength - MaxFreq > k) {

                freq[s[left] - 'A']--;
                left++;

                // Update the window size after shrinking
                windowLength = right - left + 1;
            }

            // Update the answer
            maxWindow = max(maxWindow, right - left + 1);
        }

        // Return the maximum window length
        return maxWindow;
    }
};