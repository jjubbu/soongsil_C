// 1번. 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오

#include <stdio.h>

int main(void){
    int length;
    printf("한 변의 길이 ?\n");
    scanf("%d", &length);

    printf("정사각형의 넓이:%d\n", length*length);
    printf("정사각형의 둘레:%d\n", length*4);
    return 0;

}