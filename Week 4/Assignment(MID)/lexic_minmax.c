#include <stdio.h>
#include <string.h>
int main()
{
    char S1[1001], S2[1001], S3[1001], min[1001], max[1001];

    scanf("%s", S1);
    scanf("%s", S2);
    scanf("%s", S3);

    // strcmp(-ve) = Smaller | cmp(+ve) = Bigger | cmp(0) = Equal

    if (strcmp(S1, S2) > 0)
    {

        if (strcmp(S2, S3) > 0)
        {
            strcpy(max, S1);
            strcpy(min, S3);
        }
        else if (strcmp(S2, S3) < 0)
        {
            if (strcmp(S1, S3) > 0)
            {
                strcpy(max, S1);
                strcpy(min, S2);
            }
            else if (strcmp(S1, S3) < 0)
            {
                strcpy(max, S3);
                strcpy(min, S2);
            }
        }
    }

    else if (strcmp(S1, S2) < 0)
    {

        if (strcmp(S2, S3) > 0)
        {
            strcpy(max, S2);

            if (strcmp(S1, S3) > 0)
            {
                strcpy(min, S3);
            }
            else if (strcmp(S1, S3) < 0)
            {
                strcpy(min, S1);
            }
        }
        else if (strcmp(S2, S3) < 0)
        {
            strcpy(max, S3);
            strcpy(min, S1);
        }
    }
    else if (strcmp(S1, S2) == 0)
    {
        if (strcmp(S1, S3) > 0)
        {
            strcpy(max, S1);
            strcpy(min, S3);
        }
        else if (strcmp(S1, S3) < 0)
        {
            strcpy(max, S3);
            strcpy(min, S1);
        }
        else if (strcmp(S1, S3) == 0)
        {
            strcpy(max, S1);
            strcpy(min, S1);
        }
    }
    else if (strcmp(S2, S3) == 0)
    {
        if (strcmp(S1, S2) > 0)
        {
            strcpy(max, S1);
            strcpy(min, S3);
        }
        else if (strcmp(S1, S3) < 0)
        {
            strcpy(max, S3);
            strcpy(min, S1);
        }
        else if (strcmp(S1, S3) == 0)
        {
            strcpy(max, S1);
            strcpy(min, S1);
        }
    }
    else if (strcmp(S1, S3) == 0)
    {
        if (strcmp(S1, S2) > 0)
        {
            strcpy(max, S1);
            strcpy(min, S2);
        }
        else if (strcmp(S1, S2) < 0)
        {
            strcpy(max, S2);
            strcpy(min, S1);
        }
        else if (strcmp(S1, S2) == 0)
        {
            strcpy(max, S1);
            strcpy(min, S1);
        }
    }

    printf("%s\n%s", min, max);

    return 0;
}