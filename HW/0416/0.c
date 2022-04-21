// 0번. 4장에서 출석번호에 따른 풀어야 할 문제 번호 출력하기

#include <stdio.h>

int main(void){
    int number, result;

    printf("출석번호?\n");
    scanf("%d", &number);

    result = number%5+1;

    printf("풀어야 할 문제 번호:%d %d %d 15 16\n", result, result+5, result != 5? result+10 : 17);
    
    return 0;

}