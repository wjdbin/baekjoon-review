#include <stdio.h>

int main(){
    int num, list[30];
    
    //1~30  채우기
    for(int j = 0; j < 30; j++){
        list[j] = j + 1;
    }
    
    //28개 입력: 제출한 번호는 0으로 마크크
    for(int i = 0; i < 28; i++){
        scanf("%d" , &num);
        list[num - 1] = 0;
    }
    
    //남은 두 개를 오름차순으로 출력
    for(int k = 0; k < 30; k++){
        if(list[k] != 0){
            printf("%d \n", list[k]);
        }
    }
    
    return 0;
}
