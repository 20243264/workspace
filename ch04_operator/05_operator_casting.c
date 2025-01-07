#include <stdio.h>

/*
*형변환(Casting)
*1.프로모션(small type->big type) 
*-문제없음(일반적으로 자동 형변환)
*ex)int->double
*2.캐스팅(big type->small type)
*-값의 손실이 생김(직접 코드 작성)

*/
int main() {
    //1.프로모션
    double res;
    res=5;
    printf("%lf\n",res);
    //2.캐스팅 
    double pi=3.14;
    int a;
    a=(int)pi;
    printf("%d\n",a);

}