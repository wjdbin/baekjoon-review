#include <stdio.h>

int main()
{
    int T, C;
    
    scanf("%d", &T);
    
    while(T--)
    {
        scanf("%d", &C);
        
        int quarter = C / 25;
        C %= 25;
        
        int dime = C / 10;
        C %= 10;
        
        int nickel = C / 5;
        C %= 5;
        
        int penny = C;
        
        printf("%d %d %d %d \n", quarter, dime, nickel, penny);
    }
    
    return 0;
}
