// 12번. 네비게이션 앱에서 이동 거리와 예상 속력으로 도착 예정 시간을 구하는 프로그램을 작성하시오. 이동 거리는 km 단위로, 예상 속력은 km/h 단위로 입력받으며, 둘 다 실수로 입력받는다. 예상 소요 시간은 분 단위로 출력하며 정수로 출력한다.

#include <stdio.h>

int main(void){
    int distance, speed, result;

    printf("이동 거리(km)?\n");
    scanf("%d", &distance);

    printf("예상 속력(km/h)?\n");
    scanf("%d", &speed);

    result = distance/((double)speed/60);

    printf("도착까지 예상 소요 시간은 %d분 입니다.\n", result);
    
    return 0;

}