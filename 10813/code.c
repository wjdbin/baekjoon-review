#include <stdio.h>

int main() {
    int arr[101], n, m, c1, c2, tmp;

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) arr[i] = i; // 바구니 초기화

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &c1, &c2);
        tmp = arr[c1];
        arr[c1] = arr[c2];
        arr[c2] = tmp;
    }

    for (int j = 1; j <= n; j++) printf("%d ", arr[j]);
    printf("\n");
    return 0;
}
