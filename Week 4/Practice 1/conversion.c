#include <stdio.h>
int main()
{
    char str[100001];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < sizeof(str); i++)
    {
        if (str[i] == '\0' || str[i] == '\n')
        {
            break;
        }
        if (str[i] == ',')
        {
            str[i] = ' ';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    fputs(str, stdout);

    return 0;
}