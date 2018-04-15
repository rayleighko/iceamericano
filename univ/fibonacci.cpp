#include<stdio.h>

int fib(int n);	
int fib2(int n);

int main(void)
{
	printf("%d", fib(10));

	printf("%d", fib2(10));
	
	return 0;
}

int fib(int n)
{
	if(n <= 1) return n;
	else return fib(n-1) + fib(n-2);
}

int fib2(int n)
{
	int f[n];
	f[0] = 0;
	if (n > 1){
		f[1] = 1;
		for(int i = 2; i <= n; i++)
			f[i] = f[i-1] + f[i-2];
	}
	return f[n];
}	
