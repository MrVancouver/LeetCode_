#include <stdio.h>
#include <stdlib.h>

int len(char c[])
{
    int i;

    i = 0;
    while(c[i] != 0)
        i++;
    return(i);
}

char * mergeAlternately(char * word1, char * word2)
{
    int tam;
    int i;
    int p1;
    int p2;

    i = 0;
    p1 = 0;
    p2 = 0;
    tam = 0;
    tam += len(word1);
    tam += len(word2);
    char *merged = (char *) malloc((tam + 1) * sizeof(char));

    while(i < tam)
    {
        if (word1[p1] != 0)
        {
            merged[i] = word1[p1];
            i++;
            p1++;
        }
        if (word2[p2] != 0)
        {
            merged[i] = word2[p2];
            i++;
            p2++;
        }
    }
    merged[i] = '\0';
    return(merged);
}

int     main(void)
{
    char *teste1 = "abc";
    char *teste2 = "pqr";
    printf("%s", mergeAlternately(teste1,teste2));
}