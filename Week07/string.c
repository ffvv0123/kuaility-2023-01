#include <stdio.h>
#include <string.h>

int main(){
    char buf[4];
    char d[8] = "";
    scanf("%s", buf);

    if(strcmp(d, "BBBBBBBB") == 0){
        printf("Hacked!");
    }
    else{
        printf("Safe!");
    }

    printf("%p, %p", &buf, &d);

    return 0;
}