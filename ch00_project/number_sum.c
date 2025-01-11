#include <stdio.h>
//1.정수값 입력 받기!
//2.
//3.4+1+2=7
int main() {
    int num=412;
    int total=0;

    while(num>0) {
        total=total+num%10;
        num=num/10;
    }
    printf("총합:%d",total);

}
