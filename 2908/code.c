#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[4], b[4];
    scanf("%s %s", a, b);
    
    char ra[4], rb[4];
    ra[0] = a[2];
    ra[1] = a[1];
    ra[2] = a[0];
    ra[3] = '\0';
    
    rb[0] = b[2];
    rb[1] = b[1];
    rb[2] = b[0];
    rb[3] = '\0';
        
    int numA = atoi(ra);
    int numB = atoi(rb);
    
    printf("%d \n", numA > numB ? numA : numB);
    
    return 0;
}
