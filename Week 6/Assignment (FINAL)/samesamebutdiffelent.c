#include <stdio.h>
#include <string.h>

int min_operations(char x[], char y[], char z[]) {
    int length = strlen(x);
    int operations = 0;

    for (int i = 0; i < length; i++) {
        char ch1 = x[i];
        char ch2 = y[i];
        char ch3 = z[i];

        if (ch1 == ch2 && ch2 == ch3) {
            continue;
        } else if (ch1 == ch2 || ch1 == ch3 || ch2 == ch3) {
            operations += 1;
        } else {
            operations += 2;
        }
    }

    return operations;
}

int main() {
    char s1[101], s2[101], s3[101];
    // fgets(s1, sizeof(s1), stdin);
    // fgets(s2, sizeof(s2), stdin);
    // fgets(s3, sizeof(s3), stdin);
    scanf("%s\n",s1);
    scanf("%s\n",s2);
    scanf("%s",s3);

    int result = min_operations(s1, s2, s3);
    printf("%d", result);

    return 0;
}
