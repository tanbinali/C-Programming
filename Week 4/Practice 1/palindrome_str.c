#include <stdio.h>
int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int str_len = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (str[i] == '\0' || str[i] == '\n')
        {
            break;
        }
        str_len++;
    }
    // printf("%d",str_len);
    for (int i = 0, j = str_len - 1; i <= j; i++, j--)
    {
        if (str[i] != str[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}