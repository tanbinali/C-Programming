#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

     for (int i = 1; i <= N; i++) {
     
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

       
        for (int j = 1; j <= (1+(i-1)*(2)); j++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = N; i >= 1; i--) {
     
        for (int j = N-i; j >= 1; j--) {
            printf(" ");
        }

       
        for (int j = (1+(i-1)*(2)); j >= 1; j--) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}