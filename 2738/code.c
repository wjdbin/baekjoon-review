#include <stdio.h>

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    int A[a][b], B[a][b];
    
    for(int j = 0; j < a; j++)
    {
        for(int k = 0; k < b; k++)
        {
            scanf("%d", &A[j][k]);
        }
    }
    
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
