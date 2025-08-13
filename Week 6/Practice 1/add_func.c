#include <stdio.h>

int add(int X, int Y)
{
    int sum = X + Y;
    return sum;
}
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    printf("%d", add(X, Y));

    return 0;
}