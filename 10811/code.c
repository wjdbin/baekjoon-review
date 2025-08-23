#include <stdio.h>

int main(){
    int N, M;
    int arr[101], tmp;
    int a, b;

    scanf("%d %d", &N, &M);

    for(int i = 1; i <= N; i++){
        arr[i] = i;
    }

    for(int i = 0; i < M; i++){
        scanf("%d %d", &a, &b);
        int L = a, R = b;
        while(L < R){
            tmp = arr[L];
            arr[L] = arr[R];
            arr[R] = tmp;
            L++;
            R--;
        }
    }

    for(int i = 1; i <= N; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
