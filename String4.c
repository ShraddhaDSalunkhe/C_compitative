
#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);

    for (int i = 0; i <= n - m; i++) {
        int j;

        for (j = 0; j < m; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }

        if (j == m) {
            return i;
        }
    }

    return -1;
}

int main() {
    char haystack[10001];
    char needle[10001];

    scanf("%s", haystack);
    scanf("%s", needle);

    printf("%d\n", strStr(haystack, needle));

    return 0;
}
