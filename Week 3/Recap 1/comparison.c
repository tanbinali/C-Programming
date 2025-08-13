#include <stdio.h>
#include <stdbool.h>
int main()
{
    char S;
    int A, B;
    scanf("%d %c %d", &A, &S, &B);
    if (S == '<')
    {
        if (A < B)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    if (S == '>')
    {
        if (A > B)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }if (S == '=')
    {
        if (A == B)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}