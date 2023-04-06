#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DRINKS 15

int main(){
    int menu = 0;
    int earnMoney, currentMoney = 0;

    char drinks[MAX_DRINKS][50];
    int price[MAX_DRINKS];
    int inventory[MAX_DRINKS];
    int num_drinks = 0, count = 0;

    FILE *fp1, *fp2, *fp3;
    fp1 = fopen("drinks.txt", "r");
    fp2 = fopen("price.txt", "r");
    fp3 = fopen("result.txt", "w");

    if(fp1 == NULL){
        printf("Cannot open file!\n");
        exit(1);
    }

    if (fp2 == NULL) {
        printf("Cannot open file!\n");
        exit(1);
    }

    if (fp3 == NULL) {
        printf("Cannot open file!\n");
        exit(1);
    }

    while(fgets(drinks[num_drinks], 50, fp1) != NULL){
        drinks[num_drinks][strcspn(drinks[num_drinks], "\n")] = '\0';
        num_drinks++;
    }

    while (fscanf(fp2, "%d", &price[count]) != EOF) {
        count++;
    }

    for (int i = 0; i < num_drinks; i++){
        inventory[i] = 3;
    }

        while (1) {
            printf("메뉴를 선택하세요: (1: 금액 투입, 2: 잔돈 반환, 3: 음료수 리스트 보기, 4: 음료수 선택, 5: 종료)\n");
            scanf("%d", &menu);

            if (menu == 1) { // 금액 투입
                int inputMoney;
                printf("자판기에 돈을 넣으세요: ");
                scanf("%d", &inputMoney);
                currentMoney += inputMoney;
                printf("현재까지 투입된 금액: %d\n", currentMoney);

            }
            else if (menu == 2) { // 잔돈 반환
                printf("잔돈 %d원이 반환되었습니다.\n", currentMoney);
                currentMoney = 0;
            }
            else if (menu == 3) { // 음료수 리스트 복
                for (int i = 0; i < num_drinks; i++) {
                    printf("%s의 가격: %d원 잔여량: %d개, 선택번호: %d\n", drinks[i], price[i], inventory[i], i);
                }
            }
            else if (menu == 4){
                int index;
                printf("먹고싶은 음료수의 번호를 선택하세요: ");
                scanf("%d", &index);

                if(currentMoney < price[index]){
                    printf("잔액이 모자랍니다.\n");
                }
                else if(inventory[index] < 1){
                    printf("선택한 음료수가 모자랍니다.\n");
                }
                else{
                    currentMoney -= price[index];
                    inventory[index]--;
                    printf("%s가 나옵니다. 잔액은 %d원 입니다.\n", drinks[index], currentMoney);
                }

            } else if (menu == 5) {
                printf("자판기 프로그램을 종료합니다.\n");

                for (int i = 0; i < num_drinks; i++){
                    fprintf(fp3, "%s: %d원, %d개\n", drinks[i], price[i], inventory[i]);
                }
                break;
            } else {
                printf("올바른 메뉴 값을 입력하세요\n");
            }
        }


    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}