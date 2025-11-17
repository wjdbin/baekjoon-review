#include <stdio.h>

int main()
{
    char name[51];
    char score[5];
    double n;
    double sum_score = 0, sum_credit = 0;
    
    for(int i = 0; i < 20 ; i++)
    {
        scanf("%s %lf %s", name, &n, score);
        if(score[0] == 'P') continue;
        
        double grade = 0.0;
        
        if(score[0] == 'F')
        {
            grade = 0.0;
        }
        else
        {
            if(score[0] == 'A') grade = 4.0;
            else if(score[0] == 'B') grade = 3.0;
            else if(score[0] == 'C') grade = 2.0;
            else grade = 1.0;
            
            if(score[1] == '+') grade += 0.5;
        }
        
        sum_score += n * grade;
        sum_credit += n;
    }
    
    printf("%lf", sum_score / sum_credit);
    
    return 0;
}
