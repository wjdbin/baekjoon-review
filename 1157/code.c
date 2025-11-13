#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[1000001];
    
    scanf("%s", word);
    
    int alpha_count[26] = {0, };
    int len = strlen(word);
    
    for(int i = 0; i < len; i++)
    {
        char c = toupper(word[i]);
        
        alpha_count[c - 'A']++;
    }
    
    int max_count = 0;
    char max_char = '?';
    int is_duplicate = 0;
    
    for(int i = 0; i < 26; i++)
    {
        if(alpha_count[i] > max_count)
        {
            max_count = alpha_count[i];
            max_char = i + 'A';
            is_duplicate = 0;
        }
        else if(alpha_count[i] == max_count)
        {
            is_duplicate = 1;
        }
    }
    
    if(is_duplicate)
    {
        printf("?");
    }
    else
    {
        printf("%c", max_char);
    }

    return 0;
}
