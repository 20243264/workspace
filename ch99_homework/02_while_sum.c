#include <stdio.h>

int main() {
    int num = 1;     // 시작 숫자
    int odd_sum = 0; // 홀수 합
    int even_sum = 0; // 짝수 합

    while (num <= 100) { // 1부터 100까지 반복
        if (num % 2 == 0) { // 짝수인 경우
            even_sum += num;
        } else { // 홀수인 경우
            odd_sum += num;
        }
        num++; // 숫자 증가
    }

    // 결과 출력
    printf("홀수 합: %d\n", odd_sum);
    printf("짝수 합: %d\n", even_sum);

    return 0;
}
