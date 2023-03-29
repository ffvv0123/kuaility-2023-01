#include <stdio.h>
int number = 0;

void assignLocalValue() {
    number = 10;
}

int main(){

    printf("%d\n", number);
    assignLocalValue();
    printf("%d\n", number);

    return 0;
}