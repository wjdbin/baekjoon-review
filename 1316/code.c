#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char word[101];
    
    scanf("%d", &n);
    
    int group_word_count = 0;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", word);
        
        int visited[26] = {0};
        int len = strlen(word);
        int is_group = 1;
        
        visited[word[0] - 'a'] = 1;
        
        for(int j = 1; j < len; j++)
        {
            char current = word[j];
            char prev = word[j - 1];
            
            if(current != prev)
            {
                if(visited[current - 'a'] == 1)
                {
                    is_group = 0;
                    break;
                }else
                {
                    visited[current - 'a'] = 1;
                }
            }
        }
        if(is_group == 1)
        {
            group_word_count++;
        }
    }
    printf("%d", group_word_count);
    
    return 0;
}
