#include <stdio.h>

int main(void) {
    char word[101];
    int length = 0;

    scanf("%s", word); // 문자열 입력받기

    // '\0' 나올 때까지 길이 세기
    for (int i = 0; word[i] != '\0'; i++) {
        length++;
    }

    printf("%d\n", length);

    return 0;
}
