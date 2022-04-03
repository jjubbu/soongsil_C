// 11번. 원/달러 환율과 원화를 입력받아 몇달러인지 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main(void){
    int krw;
    float exchange_rate;

    printf("KRW?\n");
    scanf("%d",&krw);
    printf("원/달러 환율?\n");
    scanf("%f",&exchange_rate);
    printf("KRW %d = USD %.2f\n", krw, krw/exchange_rate);
    return 0;

}