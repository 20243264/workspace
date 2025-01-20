/*
*지시자 
*1.#include:지정한 파일을 소스코드에 포함 
*ex)#incldue <stdio.h>
*->include 디렉토리에서 stdio.h 파일을 찾아 코드에 복사 
*2.#define:매크로 상수와 매크로 함수를 만들 때 사용
*ex)#define PI 3.14
*->PI는 상수 3.14로 변경
*ex>#define SUM(x,y) ((x)+(y))
*->SUM(10,20)은 ((10)+(20))으로 변경
*.#if,#else,#elif,#iedf,#ifndef,#endif:조건부 컴파일 지시자 
*소스파일(abc.c):직접 코딩
*1단계)전처리
-지시자(#include, #define,...)에 따라 프로그램에 필요한 소스 중 외부에 잇는 소스를 불러옴 
*전러리 된 소스파일
*2단계)컴파일
*-CPU가 해석할 수 있는 명령어들로 구성 된 기계어로 변환 
*/