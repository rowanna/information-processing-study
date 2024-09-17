

// 18. 이진법변환
#include<stdio.h> int main() {
int x = 0x11;
int y, z;
y = x & 0x0f;
z = x | 0x0f;
printf("x=%d, y=%d, z=%d", x, y, z); return 0;
}
// x = 17, y = 1, z = 31

// 19. 정수 앞 | 연산자 존재 시 이진법변환
#include <stdio.h>
int main(int argc, char *argv[]) {
int a = 4;
int b = 7;
int c = a | b;
printf("%d", c);
return 0; 
}
// 7


// 20. C언어에서 정수 변수 a, b에 각각 1, 2가 저장되어 있을 때 다음 식의 연산 결과를 쓰시오.
a < b + 2 && a << 1 <= b

// 21. 

