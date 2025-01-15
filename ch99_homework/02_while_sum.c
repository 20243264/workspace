#include <stdio.h>

<<<<<<< HEAD
//문제:while문을 사용해서 1~100까지의 값을 사용해서 홀수합, 짝수합 계산

=======
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
>>>>>>> 2945dfcf4c1a6507a7a56857f66074e513775e58
