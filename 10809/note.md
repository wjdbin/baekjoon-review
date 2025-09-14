# 📘 백준 10809번 오답노트  

## 문제  
알파벳 소문자로만 이루어진 문자열 **S**가 주어졌을 때, 각 알파벳(a~z)이 문자열에 **처음 등장하는 위치**를 출력하는 문제.  
- 문자열에 등장하지 않으면 `-1`을 출력한다.  
- 문자열 인덱스는 **0부터 시작**한다.  

---

## 예시  
입력  
baekjoon
출력
1 0 2 -1 4 -1 -1 -1 7 -1 -1 -1 -1 -1 5 -1 -1 -1 -1 6 -1 -1 -1 -1 -1 -1

---

## ❌ 내가 틀렸던 / 헷갈렸던 부분  

1. **널 문자 처리**  
   - 처음에 `s[i] == '\0'` 조건으로 생각했는데, 이건 문자열 끝에서만 실행됨 → 반복문이 아예 안 돎.  
   - 올바른 조건은 `s[i] != '\0'` (끝날 때까지 반복).  

2. **alpha 배열 접근**  
   - `if (alpha[i] == -1)` 로 썼다가 오답.  
   - `i`는 문자열 위치이므로 ❌, `idx`를 써야 알파벳별 위치 저장 가능.  
   - 올바른 코드: `if (alpha[idx] == -1) alpha[idx] = i;`  

3. **출력 형식**  
   - 공백 처리를 안 하면 값들이 붙어서 출력됨.  
   - `if (i) printf(" ");` → 첫 번째 출력에는 공백 안 붙이고, 두 번째부터 공백 추가.  

4. **`string.h` 필요 여부**  
   - `strlen` 같은 문자열 함수를 안 썼으므로 `#include <string.h>`는 불필요.  
   - 문자열 끝은 직접 `\0`로 체크하면 충분.  

5. **scanf 반환값 경고 (Visual Studio)**  
   - MSVC는 `scanf`의 반환값을 확인하지 않으면 경고 발생.  
   - 백준에서는 그냥 `scanf("%100s", str);` 써도 무방.  
   - Visual Studio에서는 `scanf_s("%100s", str, sizeof(str))` 형태로 써야 경고 없이 실행됨.  

6. **for문 안 변수 선언**  
   - Visual Studio 구버전 C 컴파일러는 `for (int i = 0; ...)` 문법에서 에러 발생.  
   - 해결 → 루프 밖에서 `int i;` 선언 후 사용.  

---

## 🖥️ Visual Studio 전용 코드  

```c
#include <stdio.h>

int main(void) {
    char str[101];
    int alpha[26];
    int i;

    for (i = 0; i < 26; i++) alpha[i] = -1;

    // scanf_s는 세 번째 인자로 버퍼 크기를 반드시 요구함
    if (scanf_s("%100s", str, (unsigned)sizeof(str)) != 1) return 1;

    for (i = 0; str[i] != '\0'; i++) {
        int idx = str[i] - 'a';
        if (alpha[idx] == -1) alpha[idx] = i;
    }

    for (i = 0; i < 26; i++) {
        if (i) printf(" ");
        printf("%d", alpha[i]);
    }
    printf("\n");
    return 0;
}
```
💡 배운 점

문자열은 항상 \0으로 끝난다 → s[i] != '\0'로 확인.

s[i] - 'a' 계산으로 문자를 0~25 범위로 변환 가능.

alpha[idx]를 사용해야 올바르게 알파벳 위치를 기록할 수 있다.

출력 형식은 if (i) printf(" ");로 조절.

string.h는 strlen, strcmp 등 함수 쓸 때만 필요.

Visual Studio는 scanf 대신 scanf_s 사용, for문 변수는 루프 밖에서 선언하는 게 안전하다.
