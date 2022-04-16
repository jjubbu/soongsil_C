// 16번. 컴퓨터 시스템에서 색상을 표현하는 방법 중에 RGB 표기법은 red, green, blue 에 8비트씩을 사용해서 색상을 표현하므로 24비트 트루컬러라고 한다. 컴퓨터 시스템에서는 32비트 데이터의 최하위 바이트부터 red, green blue의 순서로 색상 정보를 저장하고 최상위 바이트는 사용하지 않고 0으로 채운다. 0~255사이의 값을 red, green blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오. RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.

#include <stdio.h> 


int main(void){
    unsigned char red, blue, green;
    int result;
    
    printf("red?\n");
    scanf("%hhu", &red);

    printf("green?\n");
    scanf("%hhu", &green);

    printf("blue?\n");
    scanf("%hhu", &blue);

    result = (blue << 16) + (green << 8) + red;

    printf("RGB 트루컬러:%06X\n", result);
    return 0;
}