/*
*열거형(enum)
*-열거형 변수는 사용할 수 있는 값을 미리 저장해두고 사용하는 방법 
*ex)season->{spring,summer,fall.winter}고정
*-타입 안전성을 높일 수 있음
*-가독성을 높일 수 있음(0,1 정수 표현보다 문자열로 표현하기 때문)
*-유지보수 용이->수정 시 열거형만 수정하면 나머지는 수정하지 않아도 됨 
*/
#include <stdio.h>

enum season{spring,summer,fall,winter};

int main() {
    enum season ss;
    char *pc=NULL;

    ss=spring;
    switch(ss) {
        case spring:
        pc="inline";
        break;
        case summer:
        pc="swimming";
        break;
        case fall:
        pc="trip";
        break;
        case winter:
        pc="sking";
        break;
    }
    printf("나의 레저활동:%s\n",pc);
}