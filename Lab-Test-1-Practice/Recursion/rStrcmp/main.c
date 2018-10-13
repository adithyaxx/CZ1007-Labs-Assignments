#include <stdio.h>
#define INIT_VALUE 10
int rStrcmp(char *s1, char *s2);
int main()
{
    char source[40], target[40];
    int result=INIT_VALUE;

    printf("Enter a source string: \n");
    gets(source);
    printf("Enter a target string: \n");
    gets(target);
    result = rStrcmp(source, target);
    printf("rStrcmp(): %d", result);
    return 0;
}
int rStrcmp(char *s1, char *s2)
{
    /* Write your code here */
    char *p1, *p2;
    p1 = s1;
    p2 = s2;

    if (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
    {
        return rStrcmp(++p1, ++p2);
    }
    else if (*p1 < *p2)
        return -1;
    else if (*p2 < *p1)
        return 1;
    else
        return 0;
}
