// 7번. 직각 삼각형에서 두 변 a, b의 길이를 입력받아 빗변의 길이를 구하는 프로그램을 작성하시오.

#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, result;

    printf("밑변?\n");
    scanf("%lf", &a);

    printf("높이?\n");
    scanf("%lf", &b);

    result = sqrt(a*a + b*b);

    printf("빗변의 길이:%f\n", result);

    return 0;
}