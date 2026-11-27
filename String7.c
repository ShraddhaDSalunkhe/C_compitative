int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int left = 0, maxLen = 0;

    int freq[256] = {0};

    for (int right = 0; right < n; right++) {

        freq[(unsigned char)s[right]]++;

        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        int len = right - left + 1;

        if (len > maxLen) {
            maxLen = len;
        }
    }

    return maxLen;
}
