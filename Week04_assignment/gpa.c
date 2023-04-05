#include <stdio.h>

int main(){
    int courseNum;
    double score = 0;
    printf("Enter the number of courses you've taken: ");
    scanf("%d", &courseNum);

    char grade, sign;
    int time;
    int timeSum = 0;
    for (int i = 0; i < courseNum; i++) {
        printf("Enter the grade of the %dth subject and times: ", i + 1);
        scanf(" %c %c %d", &grade, &sign, &time);
        switch(grade){
        case 'A':
            score += 4.0 * time;
            break;
        case 'B':
            score += 3.0 * time;
            break;
        case 'C':
            score += 2.0 * time;
            break;
        case 'D':
            score += 1.0 * time;
            break;
        default:
            score += 0.0;
        }
        switch (sign) {
        case '+':
            score += 0.5 * time;
            break;
        case '-':
            score -= 0.5 * time;
            break;
        default:
            break;
        }
        timeSum += time;
    }
    
    score /= timeSum;

    printf("Conveted GPA: %.2f\n", score);

    return 0;
}