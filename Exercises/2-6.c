#include <stdio.h>
// scanf 로 출력하기
int main()
{
    char name[20];
    int age;
    float nums;

    printf("이름, 나이, 실수\n");
    scanf("%s %d %f", name, &age, &nums);
    printf("이름: %s\n", name);
    printf("나이: %d\n", age);
    printf("실수: %e\n", nums);

    return 0;
}