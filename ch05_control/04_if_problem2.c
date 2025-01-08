#include <stdio.h>

int main() {
    //0~100점을 입력 받고, 학점으로 변환해서 출력하는 프로그램
    int score;
    char grade;
    printf("점수를 입력하시오:");
    scanf("%d",&score);
    
    if(score>=91) {
        grade='A';
    }
    else if(score>=81) {
        grade='B';
    }
    else if(score>=71) {
        grade='C';
    }
    else if(score>=61) {
        grade='D';
    }
    else {
        grade='F';
    }
    printf("당신의 점수는 %d점으로 %c학점입니다",score,grade);
}