
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int maxLength(int* nums, int numsSize) {
    int ans = 0;

    for (int i = 0; i < numsSize; i++) {
        long long prod = 1;
        int g = 0;
        int l = 1;

        for (int j = i; j < numsSize; j++) {
            prod *= nums[j];

            g = gcd(g, nums[j]);
            l = lcm(l, nums[j]);

            if (prod == (long long)g * l) {
                int len = j - i + 1;

                if (len > ans) {
                    ans = len;
                }
            }
        }
    }

    return ans;
}
