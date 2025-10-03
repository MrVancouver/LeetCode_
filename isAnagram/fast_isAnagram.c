#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) {
        return false;
    }

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
// made by IU Studies
// profile : https://leetcode.com/u/IU-Studies/
/*
int main(void)
{
    char txt1[] = "teste";
    char txt2[] = "setet";
    printf("%s\n",isAnagram(txt1,txt2) ? "true" : "false");
}
*/