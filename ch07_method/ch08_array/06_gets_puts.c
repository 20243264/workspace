#include <stdio.h>

int main() {
    //입력:문자열 입력(gets)
    //출력:문자열 입력(puts)
    char name[20];
    printf("이름:");
    gets(name);
    puts("입력된 문자열:");
    puts(name);
}