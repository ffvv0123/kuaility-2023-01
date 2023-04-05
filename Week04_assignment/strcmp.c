/*
strcmp() 함수는 <string.h> 헤더파일에 존재하는 함수이다.
이 함수는 두 개의 문자열을 비교하여 같으면 0, 다르면 0이 아닌 값을 리턴한다.

이 함수는 입력 문자열의 길이를 확인하지 않고 비교를 수행한다.
-> 입력 문자열의 길이를 초과할 수 있는 버퍼 오버런(buffer overrun)에 취약
-> 프로그램의 메모리에 악성 코드 삽입 or 비정상종료 등의 결과 초래

해결방법 -> 입력 문자열의 길이를 확인하는 절차 필요
*/

#include <stdio.h>
#include <string.h>

int main(){
    char password[10] = "1q2w3e4r";
    char input[20];

    printf("Enter password: ");
    scanf("%s", input);
    // 여기서 입력값이 20을 초과하게 된다면 버퍼 오버런이 발생한다.

    if(strcmp(password, input) == 0){
        printf("Hello user!\n");
    }
    else{
        printf("Access denied!\n");
    }

    return 0;
}