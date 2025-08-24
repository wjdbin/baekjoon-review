#include <stdio.h>

int main(){
    int N[1000], a;
    double average, sum = 0.0;
    
    scanf("%d", &a);
    
    for(int i = 0; i < a; i++){
        scanf("%d", &N[i]);
    }
    
    int M = N[0];
    for(int i = 0; i < a; i++){
        if(M < N[i]){
            M = N[i];
        }
    }
    
    for(int i = 0; i < a; i++){
        sum += (double)N[i] / M * 100.0;
    }
    
    average = sum / a;
    
    printf("%lf", average);
    
    return 0;
}
