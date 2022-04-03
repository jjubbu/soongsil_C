// 6번. 아파트 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오. 
// 1제곱미터는 0.3025평에 해당한다. 프로그램을 작성할 때 이름 있는 상수를 이용해보자.

#include <stdio.h>

int main(void){
    const float space = 0.3025;
    float meter;
    printf("아파트의 면적(제곱미터)?\n");
    scanf("%f",&meter);
    printf("%.2f 제곱미터 = %.2f평\n", meter, space*meter);
    return 0;

}