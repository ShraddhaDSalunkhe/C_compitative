
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* digitSum(char* s, int k) {

    while (strlen(s) > k) {

        char *ans = (char*)malloc(200 * sizeof(char));
        int pos = 0;

        // Divide string into groups of size k
        for (int i = 0; i < strlen(s); i += k) {

            int sum = 0;

            // Calculate sum of digits
            for (int j = i; j < i + k && j < strlen(s); j++) {
                sum += s[j] - '0';
            }

            // Convert sum into string
            pos += sprintf(ans + pos, "%d", sum);
        }

        ans[pos] = '\0';

        s = ans;
    }

    return s;
}
