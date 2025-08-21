#include <stdio.h>

int main(){
    int seen[42] = {0};
    int r, x, count = 0;
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &x);
        r = x % 42;
        seen[r] = 1;
    }
    
    for(int j = 0; j < 42; j++){
        if(seen[j] == 1){
            count++;
        }
    }
    
    printf("%d", count);
}
