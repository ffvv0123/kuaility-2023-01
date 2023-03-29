#include <stdio.h>
#include <stdlib.h>

int calc(int a, int b, char c){
    if(c == '+')
        return a + b;

    else if (c == '-')
        return a - b;

    else if (c == '*')
        return a * b;
    
    else if(c == '/')
        return a / b;
    
    else{
        printf("Invalid Input!");
        exit(1);
        }
}

int main(){
    int a, b;
    char operator;

    printf("Input two integer and char operator: ");
    scanf("%d %d %c", &a, &b, &operator);

    printf("Result of operation: %d", calc(a, b, operator));

    return 0;
}