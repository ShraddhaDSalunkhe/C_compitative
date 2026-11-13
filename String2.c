#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;

    int carry = 0;
    int k = 0;

    int n = strlen(a) + strlen(b);
    char* ans = (char*)malloc(n + 1);

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        ans[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    ans[k] = '\0';

    // Reverse the answer
    for (int x = 0; x < k / 2; x++) {
        char temp = ans[x];
        ans[x] = ans[k - 1 - x];
        ans[k - 1 - x] = temp;
    }

    return ans;
}
