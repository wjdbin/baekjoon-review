#include <stdio.h>

int main() {
    int arr[9], max, pos;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    pos = 1; // 첫 번째 값이 최대일 수도 있으니 초기화

    for (int j = 1; j < 9; j++) {
        if (arr[j] > max) {
            max = arr[j];
            pos = j + 1; // 1부터 시작하는 위치
        }
    }

    printf("%d\n", max);
    printf("%d\n", pos);

    return 0;
}
