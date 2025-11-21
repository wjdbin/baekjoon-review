#include <stdio.h>

int main()
{
    int arr[9][9];
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int max = arr[0][0];
    int m_i = 1, m_j = 1;
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(arr[i][j] >= max)
            {
                max = arr[i][j];
                m_i = i + 1;
                m_j = j + 1;
            }
        }
    }
    printf("%d \n", max);
    printf("%d %d", m_i, m_j);
    
    return 0;
    
}
