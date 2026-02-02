#include <stdio.h>

int main()
{
    int n = 1;
    int X;
    
    scanf("%d", &X);
    
    while(X > n)
    {
        X -= n;
        n++;
    }
    
    if(n % 2 == 1)
    {
        printf("%d/%d\n", n - X + 1, X);
    }
    else
    {
        printf("%d/%d\n", X, n - X + 1);
    }
}
