
#include <stdio.h>
#include <string.h>

int isValid(char* s) {
    char stack[10004];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        // Opening brackets
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        }

        // Closing brackets
        else {
            if (top == -1) {
                return 0;
            }

            char ch = stack[top--];

            if ((s[i] == ')' && ch != '(') ||
                (s[i] == '}' && ch != '{') ||
                (s[i] == ']' && ch != '[')) {
                return 0;
            }
        }
    }

    return top == -1;
}
