// 15번. 우리가 알고 있는 환율은 매매기준율이다. 실제 달러를 구입할 때는 매매기준율에 은행의 환전수수료를 더해서 환율이 결정된다. 환전수수료는 환전우대율에 따라 달라진다. 환전수수료율은 은행마다 미리 정해지며, 환전우대율은 고객마다 다르게 책정된다. 환전수수료율은 1.75%로 정해져 있다고 가정하고 원-달러 매매기준율과 환전우대율(%)를 입력받아 달러를 살 때 적용되는 환율을 결정하고, 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.
// 환전수수료 = 매매기준율 * 환전수수료율 * (1 - 환전우대율)
// 현찰 매입 시 환율 = 매매기준율 + 환전수수료

#include <stdio.h>

int main(void){
    int base;
    double prefer, exchange;
    float buy, krw;

    printf("원/달러 매매기준율?\n");
    scanf("%d", &base);

    printf("환율우대율(0~100%%)?\n");
    scanf("%lf", &prefer);

    exchange =  base+(base*0.0175*(1 - (prefer/100)));

    printf("달러를 살 때 환율은 %f 입니다.\n", exchange);

    printf("구입할 달러(USD)?\n");
    scanf("%f", &buy);

    krw = buy * exchange;

    printf("USD %.2f 살 때 ==> KRW %.2f\n", buy, krw);
    return 0;

}