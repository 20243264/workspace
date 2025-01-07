#include <stdio.h>

int main() {
    char grade; //문자(학점)
    char name[20]; //문자열(이름)

    printf("학점:");
    scanf("%c",&grade);

    printf("이름:");
    scanf("%s",&name);

    printf("%s의 학점은 %c입니다.",name,grade);
}