#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double fec1(int n);
double fec2(int n);

void main(void)
{
	int n;
	scanf("%d", &n);

	clock_t start, finish;
	start = clock();
	
	fec1(n); // 재귀적 방법
	
	finish = clock();
	
	double timer;
	timer = (double)(finish - start)/CLOCKS_PER_SEC;
	
	printf("재귀적 방법 결과 값: %e, %f 초입니다.\n", fec1(n), timer);
	start = clock();

	fec2(n); // 반복적 방법

	finish = clock();

	timer = (double)(finish - start)/CLOCKS_PER_SEC;

	printf("반복적 방법 결과 값: %e, %f 초입니다.\n", fec2(n), timer);
}

double fec1(int n)
{
	if(n > 1)
		return n * fec1(n-1);
	else
		return 1;
}

double fec2(int n)
{
	double a = 1.0;
	for(int i = n; i > 1; i--)
	{
		a *= i;
	}

	return a;
}

