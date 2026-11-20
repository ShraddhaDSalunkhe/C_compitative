
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool wordPattern(char* pattern, char* s) {

    char map1[26][100];
    int map2[3001];

    for (int i = 0; i < 26; i++) {
        map1[i][0] = '\0';
    }

    for (int i = 0; i < 3001; i++) {
        map2[i] = -1;
    }

    char words[300][100];
    int count = 0;

    char *token = strtok(s, " ");

    while (token != NULL) {
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    if (strlen(pattern) != count)
        return false;

    for (int i = 0; i < count; i++) {

        int ch = pattern[i] - 'a';

        // Check character to word mapping
        if (map1[ch][0] != '\0') {
            if (strcmp(map1[ch], words[i]) != 0)
                return false;
        }
        else {
            strcpy(map1[ch], words[i]);
        }

        // Check word to character mapping
        int found = -1;

        for (int j = 0; j < i; j++) {
            if (strcmp(words[j], words[i]) == 0) {
                found = pattern[j] - 'a';
                break;
            }
        }

        if (found != -1 && found != ch)
            return false;
    }

    return true;
}
