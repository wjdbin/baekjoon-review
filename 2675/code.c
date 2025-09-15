#include <stdio.h>

int main()
{
    int T, tc;
    char str[21];
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++)
    {
        scanf("%d %20s", &tc, str);
        
        for(int j = 0; str[j] != '\0'; j++)
        {
            for(int k = 0; k < tc; k++)
            {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
