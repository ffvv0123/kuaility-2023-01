#include<stdio.h>

void swap(int a, int b){
    int tmp;
    a = tmp;
    a = b;
    b = tmp;
}

void swapPointer(int *a, int *b){
    int *tmp;
    *a = *tmp;
    *a = *b;
    *b = *tmp;
}

int main(){
    int a = 10, b = 0;

    // call by value
    swap(a, b);
    printf("a: %d, b: %d\n", a, b);

    // call by reference
    swapPointer(&a, &b);
    printf("a: %d, b: %d\n", a, b);

    return 0;
}