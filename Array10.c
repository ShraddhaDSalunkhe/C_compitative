
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] == 1) {
            count++;

            if (count > maxCount) {
                maxCount = count;
            }
        }
        else {
            count = 0;
        }
    }

    printf("%d", maxCount);

    return 0;
}
