// 컴퓨터학과 20200988 유하진
#include <stdio.h>
int main(void)
{
	char c = 'A';
	int n = 100;
	double d = 3.14;

	char* pC;
	int* pN;
	double* pD;

	pC = &c;
	pN = &n;
	pD = &d;

	/*
	c: 'A' pC: 004ffe2b *pC: 'A'
	n: 100 pN: 004ffe1c *pN: 100
	d: 3.14 pD: 004ffe0c *pD: 3.14
	*/
	
	*pC = 'Z';
	*pN = 199;
	*pD = 3.1415;


	pC++;
	pN++;
	pD++;

	// pC: 004ffe2c pN: 004ffe20  pD: 004ffe14
	
	pC = pC + 2;
	pN = pN + 2;
	pD = pD + 2;
	
	//pC: 004ffe2e pN: 004ffe28 pD: 004ffe24
}