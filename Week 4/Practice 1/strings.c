#include <stdio.h>
int main()
{
    char A[11], B[11], C[30];
    scanf("%s", A);
    scanf("%s", B);
    // fgets(A, sizeof(A), stdin);
    // fgets(B, sizeof(B), stdin);

    int A_size = 0, B_size = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        A_size++;
    }
    for (int i = 0; B[i] != '\0'; i++)
    {
        B_size++;
    }
    printf("%d %d\n", A_size, B_size);

    for (int i = 0; i < A_size; i++)
    {
        C[i] = A[i];
    }
    for (int i = A_size, j = 0; j < B_size; i++, j++)
    {
        C[i] = B[j];
    }
    C[A_size + B_size] = '\0';
    fputs(C, stdout);
    printf("\n");

    int temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    fputs(A, stdout);
    printf(" ");
    fputs(B, stdout);

    return 0;
}