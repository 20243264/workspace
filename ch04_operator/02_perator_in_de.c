#include <stdio.h>

//증감 연산자
// ++:1증가
//--:1감소

//++a:전위형 증감 연산자
//a++:후위형 증감 연산자

int main() {
    int a=5, b=5;
    int pre,post;

    pre=(++a)*2; //1더하고 실행
    post=(b++)*2; //실행후 +1

    printf("초기값:%d, %d",a,b);
    printf("전위형 %d\n",pre);
    printf("후위형 %d\n",post);
}