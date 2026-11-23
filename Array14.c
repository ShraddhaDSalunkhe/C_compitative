#include <stdbool.h>

bool uniqueOccurrences(int* arr, int arrSize) {

    int freq[2001] = {0};
    int count[1001] = {0};

    // Count frequency of each element
    for (int i = 0; i < arrSize; i++) {
        freq[arr[i] + 1000]++;
    }

    // Check whether frequencies are unique
    for (int i = 0; i < 2001; i++) {

        if (freq[i] > 0) {

            if (count[freq[i]] > 0) {
                return false;
            }

            count[freq[i]]++;
        }
    }

    return true;
}
