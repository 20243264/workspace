/*
*파일 입출력(file i/o)
*-fopen():파일 열기 
*1)r(read):읽기 
*a.txt 내용 가져오기 
*2)w(write):쓰기
*a.txt 내용 저장 
*3)a(append):추가
*fopen():실제 파일이 있는 장치와 연결되는 스트림파일을 메모리에 생성 
*버퍼:임시 메모리 공간(속도 조절)
*fclose():파일 닫기 
*FILE 포인터를 사용 

*putchar()와 printf()의 차이점 
*1.putchar()
*-한 글자만 풀력
*-출력하는 문자는 반드시 char 떤s ASCII 값으로 표현
*-간단한 문자 출력에 적합
*2.printf()
*-형식화 된 문자열을 출력(%d, %s, %c -> 형식 지정자)
*-형식 지정자를 사용해서 여러 데이터 형식 출력 가능
*-출력 실패시 음수 변환
*-putchar()에 비해 무거움
*/

#include <stdio.h>

void main() {
    FILE *fp; //파일 포인터 선언 
    int ch; //문자를 저장할 변수 

    fp=fopen("abc.txt","r");
    
    //예외처리(Exception)
    //-예외가 발생했을 때 대처하는 방법 
    //-C언어는 예외처리(high-level) 기술이 없음 
    //-반드시 예외처리가 필요한 경우(file,db사용)
    if(fp==NULL) {
        printf("파일이 열리지 않았습니다.\n");
        return;
    }
    printf("파일이 열렸습니다.\n");

    //fp 주소로 가서 문자를 하나씩 읽어 ASCII로 반환하는 역할 
    while(1) {
        ch=fgetc(fp);

        //EOF(End of file)->ASCII 코드

        if(ch==EOF) {
            break;
        }
        //입력한 문자 화면에 출력
        putchar(ch);
    }
    fclose(fp);
}
    