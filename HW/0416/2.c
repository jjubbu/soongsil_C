// 2번. 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램을 작성하시오. 화씨 온도를 섭씨 온도로 변환하는 공식은 다음과 같다. 섭씨 온도 = (화씨 온도 - 32)x(5/9)
#include <stdio.h>

int main(void){
    double Fahrenheit, Celsius;
    
    printf("화씨온도?\n");
    scanf("%lf", &Fahrenheit);

    Celsius = (Fahrenheit - 32)*(double)(5.0/9.0);

    printf("%.2f F = %.2f C\n", Fahrenheit, Celsius);
    return 0;

}