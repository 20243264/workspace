#include <stdio.h>

/*
*for문
*-반복 횟수를 아는 경우 사용
*-for문은 초기식, 조건식, 증감식으로 구성
*-i 변수 -> 반복 횟수 
*-for 블럭문 내에서 변수 수정 x
*/
int main() {
    for(int i=1;i<10;i++) {
        printf("2x%d=%d\n",i,i*2);
    }

}