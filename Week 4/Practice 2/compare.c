#include <stdio.h>
#include <string.h>
int main()
{
    char X[25], Y[25];

    scanf("%s", &X);
    scanf("%s", &Y);

    int Xlen = strlen(X);
    int Ylen = strlen(Y);

    int cmp = strcmp(X, Y);
    // cmp(-ve) = X<Y | cmp(+ve) = X>Y | cmp(0) = X=Y

    if (cmp > 0)
    {
        puts(Y);
    }
    else if (cmp < 0)
    {
        puts(X);
    }
    else
    {
        puts(X);
    }
    return 0;
}