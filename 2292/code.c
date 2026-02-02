#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    int range_max = 1;
    int count = 1;
    
    while(n > range_max)
    {
        range_max = range_max + (6 * count);
        count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}
