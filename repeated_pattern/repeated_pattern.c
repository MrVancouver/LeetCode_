#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool repeatedSubstringPattern(char* s) 
{
    int n = strlen(s);
    char copy[2 * n + 1];
    strcpy(copy, s); 
    strcat(copy, s); 
    copy[2 * n - 1] = '\0'; 

    return strstr(copy + 1, s);
}

int main(void)
{
    char str[] = "jaajaajaajaa";
    printf("%s",repeatedSubstringPattern(str) ? "true" : "false");
}