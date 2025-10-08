
char findTheDifference(char* s, char* t)
{
    int sumS;
    int sumT;
    int i;
    int j;

    i = 0;
    j = 0;
    sumS = 0;
    sumT = 0;
    while (s[i] != 0)
    {
        sumS += s[i];
        i++;
    }
    while (t[j] != 0)
    {
        sumT += t[j];
        j++;
    }
    return(sumT - sumS);

}
/*
#include <stdio.h>
int main()
{
    char str1[] = "abcd";
    char str2[] = "abcde";

    printf("%d", findTheDifference(str1,str2));
}
*/