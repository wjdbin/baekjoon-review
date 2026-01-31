#include <stdio.h>

int main()
{
    int N;
    int result;
    int a = 1;
    scanf("%d", &N);
    
    while(N--)
    {
        a *= 2;
    }
    
    int side = a  + 1;
    
    result = side * side;
    
    printf("%d", result);
    
    return 0;
}
