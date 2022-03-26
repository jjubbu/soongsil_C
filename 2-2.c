#include <stdio.h> //standard input output 라이브러리 = 표준 입출력 함수

// 여기에 다른 함수를 생성할 수  있다.
    

// 실행은 main 함수만. 이 안에서 위에서 생성한 함수를 호출하여 사용할 수 있다.
int main(void) //매개변수가 void 면 return 안써두 됨~
{
    // 이 안에 있는걸 실행~
    printf("hello, \nworld"); //출력함수

    int number = 11;
    float xx = 1.45;
    char character = 'A';
    // char text[20] = 'ABC';

    printf("\n%d\n", number);
    printf("%x\n", number);
    printf("%#x\n", number);
    printf("%X\n", number);
    printf("%#X\n", number);
    printf("%f\n", xx);
    printf("%e\n", xx);
    printf("%e %f\n", xx, xx);
    printf("%c\n", character);
    // printf("%s\n", text);

    

    // return 없어도 문제는 없긴 함.
    return 0;
}