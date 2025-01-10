#include <stdio.h>

/*
*지역변수(local variable)
*-범위가 특정 지역 내로 한정되어 사용하는 변수 
*(특정지역:블럭문)
*-지역변수는 사용범위가 블럭 내로 제한되므로 다른 곳에서 사용 불가
*-일반적으로 같은 이름의 변수는 선언이 불가(오류)
*전역변수와 지역변수는 이름이 같아도 선언 가능!!
*블럭문이 다른 지역변수는 이름이 같아도 선언 가능!!
*-함수에 같은 이름의 변수를 선언해도 서로 충돌하지 않음
*-지역변수는 이름이 같아도 선언 된 함수가 다르면 각각 독립된 저장공간을 갖음
*-함수가 종료되면 지역변수는 할당된 저장공간을 자동으로 회수(메모리 효율적으로 사용 가능)
*-함수의 매개변수는 지역변수
*-사용할 변수가 2개 이상인 경우 가장 가까운 변수가 사용 됨!!
*
*/
int sum(int x, int y);
int a=10,b=5; //전역변수(사용범위가 프로그램 전체)
int sum(int x, int y) {
    int a=1,b=2; //지역변수
    printf("%d",a);
    int temp;
    temp=x+y;
    return temp;
}
int main(void) {
    
    int result;

    result=sum(a,b);
    printf("반환값:%d",result);
}