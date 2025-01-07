#include <stdio.h>

/*
*삼항 연산자
*-3개의 항을 사용하는 연산자
*-(조건)? 값1:값2
*조건이 T면 값1
*조건이 F면 값2
*/
int main() {
    int a=10,b=20,res;

    res=(a>b)?a:b;
    printf("큰 값:%d\n",res);
}