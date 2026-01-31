#include <stdio.h>

int main()
{
    long long N;
    int B;
    char result[100];
    int count = 0;
    
    scanf("%lld %d", &N, &B);
    
    while(N > 0)
    {
        int remainder = N % B;
        
        if(remainder < 10)
        {
            result[count] = '0' + remainder;
        }
        else
        {
            result[count] = 'A' + (remainder - 10);
        }
        
        N = N / B;
        count++;
    }
    
    if(count == 0)
    {
        printf("0");
        return 0;
    }
    
    for(int i = count - 1; i >= 0; i--)
    {
        printf("%c", result[i]);
    }
    
    return 0;
}
