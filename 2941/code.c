#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int len, count = 0;
    
    scanf("%s", str);
    
    len = strlen(str);
    
    for(int i = 0; i < len; i++)
    {
        count++;
        
        if(str[i] == 'c' && i + 1 < len)
        {
            if(str[i + 1] == '=' || str[i + 1] == '-')
            {
                i++;
            }   
        }
        else if(str[i] == 'd' && i + 1 < len)
        {
            if(str[i + 1] == '-')
            {
                i++;
            }
            else if(str[i + 1] == 'z' && i + 2 < len)
            {
                if(str[i + 2] == '=')
                {
                    i += 2;
                }
            }
        }
        else if((str[i] == 'l' || str[i] == 'n') && i + 1 < len)
        {
            if(str[i + 1] == 'j')
            {
                i++;
            }
        }
        else if((str[i] == 's' || str[i] == 'z') && i + 1 < len)
        {
            if(str[i + 1] == '='){
                i++;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}
