/*
LAB3_0 유하진 20200988 컴퓨터학과 20학번
*/

#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int result1, result2, result3;
/*
	printf("두 수의 덧셈 :  %d\n", x + y); //30
	
	x += 3;
	y *= 4;
	printf("result : %d %d\n", x, y); //13 80

	x = -x;
	printf("x=-x 연산 이후 x은 %d\n", x); //-13

	x = 10;
	y = 10;
	printf("선 연산 후 증가 : %d\n", x++); //10
	printf("다시 한번 출력 : %d\n\n", x);
	printf("y : %d\n\n", ++y);
	printf("y : %d\n\n", y);
	*/
	
	x = 10;
	y = (x--) + 2;
	printf("x: %d\n", x);
	printf("y : %d\n", y);
	
	// 관계연산자
	x = 10, y = 10;
	result1 = (x==y);
	result2 = (x<=y);
	result3 = (x>y);
	printf("result1 : %d\n", result1); 
	printf("result2 : %d\n", result2); 
	printf("result3 : %d\n", result3); 
	
	// 논리연산자
	x = 10;
	y = 20;
	result1 = (x==10 && y == 10);
	result2 = (x==10 || y == 10);
	result3 = !(x==10);
	printf("result1 : %d\n", result1);
	printf("result2 : %d\n", result2); 
	printf("result3 : %d\n", result3); 

}
