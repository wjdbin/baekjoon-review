#include <stdio.h>

int main()
{
    char str[101];  // 문자열 최대 길이 + NULL('\0') 공간
    
    while (fgets(str, sizeof(str), stdin) != NULL) {
        printf("%s", str);
    }
    
    return 0;
}
