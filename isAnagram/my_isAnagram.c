#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char *bubble(char *txt)
{
    int i;
    int j;
    int temp;
    int len;

    i = 0;
    j = 0;
    temp = 0;
    len = strlen(txt);

    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1; j++)
        {
            if (txt[j] > txt[j + 1])
            {
                temp = txt[j];
                txt[j] = txt[j + 1];
                txt[j + 1] = temp;
            }
        }
    }
    return(txt);
}

bool isAnagram(char* s, char* t)
{
    int leng_s;
    int leng_t;
    int i;
    char    *bubble_s = bubble(s);
    char    *bubble_t = bubble(t);

    i = 0;
    leng_s = strlen(s);
    leng_t = strlen(t);
    if (leng_s != leng_t)
        return(false);
    while ((bubble_s[i] == bubble_t[i]) && (i < leng_s))
        i++;
    if(bubble_s[i] != bubble_t[i])
        return(false);
    return(true);
}
// i made with bubble sort
// it works but with big tests will take so longer
/*
int main(void)
{
    char txt1[] = "teste";
    char txt2[] = "setet";
    printf("%s\n",isAnagram(txt1,txt2) ? "true" : "false");
}
*/