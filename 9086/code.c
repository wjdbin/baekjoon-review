#include <stdio.h>
#include <string.h>

int main(){
    int num;
    char str[1001];   // 문자열 저장 공간

    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        scanf("%s", str);  // 문자열 입력
        printf("%c%c\n", str[0], str[strlen(str) - 1]);  
    }

    return 0;
}
