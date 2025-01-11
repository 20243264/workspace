#include <stdio.h>

int main() {
    int num1, num2, num3, temp;
    
    // 사용자로부터 세 개의 수 입력받기
    printf("세 개의 수를 입력하세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // 세 수를 내림차순으로 정렬하기
    if (num1 < num2) { temp = num1; num1 = num2; num2 = temp; }
    if (num1 < num3) { temp = num1; num1 = num3; num3 = temp; }
    if (num2 < num3) { temp = num2; num2 = num3; num3 = temp; }
    
    // 정렬된 결과 출력
    printf("정렬된 결과: %d > %d > %d\n", num1, num2, num3);
    
    return 0;
}
