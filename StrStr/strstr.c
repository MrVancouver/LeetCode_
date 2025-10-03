int strStr(char* haystack, char* needle) 
{
    int i;
    int j;
    int len;

    i = 0;
    len = 0;
    while (needle[len] != 0)
        len++;
    if (len == 0)
        return(-1);
    while (haystack[i] != 0)
    {
        j = 0;
        while(haystack[i + j] == needle[j])
        {
            if(j + 1 == len)
                return(i);
            j++;
        }
        i++;
    }
    return(-1);
}
/*
int main(void)
{
    char    haystack[] = "Guerra civíl.";
    char    needle[] = "Guerra";

    strStr(haystack,needle);
}
*/