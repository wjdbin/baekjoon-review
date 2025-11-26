#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];
    int a;
    int result = 0;
    
    scanf("%s %d", arr, &a);
    
    int len = strlen(N);
    
    for(int i = 0; i < len; i++)
    {
        char c = N[i];
        int num;
        
        if(c >= '0' && c <= '9')
        {
            num = c - '0';
        }
        else
        {
            num = c - 'A' + 10;
        }
        
        resulf = resulf * a + num;
    }
    
    printf("%d \n", result);
    
    return 0;
}
