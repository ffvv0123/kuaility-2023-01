#include <stdio.h>

int main(){
    // input integer variable n1, n2, n3
    // print n1 () n2 () n3, () is + - * /

    int n1, n2, n3;
    char operator;
    printf("Input integer variable n1, n2, n3\n");  // 10 5 2 \n -> \n은 아무도 안가져감
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Input operator(+, -, *, /)\n"); // 여기서 \n이 자동으로 입력
    scanf("%c", &operator);
    scanf("%c", &operator); // 편법으로 한번 더 입력하기!

    printf("Result of calculation...\n");
    if(operator == '+')
        printf("%d + %d + %d = %d\n", n1, n2, n3, n1 + n2 + n3);
    else if(operator == '-')
        printf("%d - %d - %d = %d\n", n1, n2, n3, n1 - n2 - n3);
    else if(operator == '*')
        printf("%d * %d * %d = %d\n", n1, n2, n3, n1 * n2 * n3);
    else if (operator == '/')
        printf("%d / %d / %d = %d\n", n1, n2, n3, n1 / n2 / n3);
    else
        printf("Invalid Operator!\n");

    switch(operator){
        case '+':
            printf("%d + %d + %d = %d\n", n1, n2, n3, n1 + n2 + n3);
            break;
        case '-':
            printf("%d - %d - %d = %d\n", n1, n2, n3, n1 - n2 - n3);
            break;
        case '*':
            printf("%d * %d * %d = %d\n", n1, n2, n3, n1 * n2 * n3);
            break;
        case '/':
            printf("%d / %d / %d = %d\n", n1, n2, n3, n1 / n2 / n3);
            break;
        default:
            printf("Invalid Operator!\n");
        }

    return 0;
}