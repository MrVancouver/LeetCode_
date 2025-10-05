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

// i had no ideia how to do this
// but i looked for the solution and got it now
// thanks Vignesh(https://leetcode.com/u/vickyy234/)
/*
int main(void)
{
    char str[] = "jaajaajaajaa";
    printf("%s",repeatedSubstringPattern(str) ? "true" : "false");
}
*/