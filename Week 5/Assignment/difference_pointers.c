#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int *P = &A;
    int *Q = &B;

    int diff = abs(*P - *Q);
    printf("%d", diff);

    return 0;
}