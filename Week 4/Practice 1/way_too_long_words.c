#include <stdio.h>
int main()
{
    int T;
    scanf("%d\n", &T);
    char str[101];
    for (int i = 0; i < T; i++)
    {
        fgets(str, sizeof(str), stdin);
        int word_count = 0;
        for (int j = 0; j <= 100; j++)
        {
            if (str[j] == '\0' || str[j] == '\n' )
            {
                break;
            }
            else
            {
                word_count++;
            }
        }
        if (word_count <= 10)
        {
            fputs(str, stdout);
            
        }
        else if (word_count > 10)
        {
            printf("%c%d%c", str[0], (word_count - 2), str[word_count-1]);
            printf("\n");
        }
    }

    return 0;
}