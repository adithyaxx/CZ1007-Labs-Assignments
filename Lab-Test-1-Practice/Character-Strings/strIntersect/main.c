#include <stdio.h>
void strIntersect(char *str1, char *str2, char *str3);
int main()
{
    char str1[50],str2[50],str3[50];

    printf("Enter str1: \n");
    scanf("%s",str1);
    printf("Enter str2: \n");
    scanf("%s",str2);
    strIntersect(str1, str2, str3);
    if (*str3 == '\0')
        printf("strIntersect(): null string\n");
    else
        printf("strIntersect(): %s\n", str3);
    return 0;
}
void strIntersect(char *str1, char *str2, char *str3)
{
    /* Write your code here */
    char *p1, *p2, *p3;
    p1 = str1;
    p2 = str2;
    p3 = str3;
    int i = 0, j = 0, k = 0;

    while (str1[i] != '\0')
    {
        j = 0;

        while (str2[j] != '\0')
        {
            if (str2[j] == str1[i])
            {
                str3[k] = str2[j];
                k++;
            }
            j++;
        }

        i++;
    }

    str3[k] = '\0';
}
