#include <stdio.h>

int main() {
    // 문자열 저장 → char[]배열
    // 문자열 저장 → 포인터 변수
    // "apple" → 'a'의 시작주소
    // 포인터 변수 dessert에 'a'의 시작주소 저장
    // char fruit[6] = "apple"; → 문자열을 직접 배열에 담지 않아도
    //                            컴파일러가 문자열을 char[]에 저장해서 실행 → 실제 문자열에 문자열의 첫 주소를 저장
    char *dessert = "apple";
    printf("오늘 후식은 %s입니다. \n", dessert);
    dessert = "banana";
    printf("내일 후식은 %s입니다. \n", dessert);

}