#include <stdio.h>

int main()
{
    int n;
    char num[101];   // 문자열(숫자 최대 100자리)
    int sum = 0;

    scanf("%d", &n);   // 숫자 개수 입력
    scanf("%s", num);  // 숫자 문자열 입력 (여기 반드시 %s)

    for (int i = 0; i < n; i++)
    {
        sum += num[i] - '0';   // 문자 → 숫자 변환
    }

    printf("%d", sum);

    return 0;
}
