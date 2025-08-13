#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int X,Y,Z,total_salami;
    scanf("%d %d %d",&X,&Y,&Z);
    
    total_salami = X + Y + Z ;
    
    printf("%d",total_salami);
    return 0;
}