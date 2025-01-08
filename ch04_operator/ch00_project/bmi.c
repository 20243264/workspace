#include <stdio.h>
#include <string.h>
//BMI 계산기
//BMI지수 공식
//몸무게(kg)/(신장(m)x신장(m))
//BMI 범위
//1.18.5미만:저체중
//2.18.5~23미만:정상
//3.23~26미만:과체중
//4.26~30미만:비만
//5.30이상:고도비만

int main() {
    int height;
    int weight;
    printf("신장(cm):");
    scanf("%d",&height);
    printf("몸무게(kg):");
    scanf("%d",&weight);

    if(bmiValue<18.5) {
        strcpy(bmiClass,"저체중중")
    }
    else if(bmiValue<23) {
        strcpy(bmiClass,"정상");
    }
    else if(bmiValue<25) {
        strcpy(bmiClass,"과체중");
    }
    else if(bmiValue<30) {
        strcpy(bmiClass,"비만");
    }
    else {
        strcpy(bmiClass,"고도비만");
    }
    //데이터 전처리 
    double height_m=(double)height/100;

    double bmiValue=weight/(height_m*height_m);
    char bmiClass[20];
}
    