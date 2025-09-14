#include <stdio.h>
#include <string.h>

int main(void) {
    char s[101];
    int pos[26];
    for (int i = 0; i < 26; i++) pos[i] = -1;

    scanf("%100s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        int idx = s[i] - 'a';
        if (pos[idx] == -1) pos[idx] = i;  // 처음 등장한 위치만 기록
    }

    for (int i = 0; i < 26; i++) {
        if (i) printf(" ");
        printf("%d", pos[i]);
    }
    printf("\n");
    return 0;
}
